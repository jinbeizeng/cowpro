<?php
/**
 * callback.
 * 贷款续期
 */
function _cowpro_issuing_renewal($node) {
	ctools_include ( 'modal' );
	ctools_include ( 'ajax' );
	$form_state = array (
			'nid' => $node->nid,
			'node' => $node,
			'ajax' => TRUE
	);
	$output = ctools_modal_form_wrapper ( '_cowpro_issuing_renewal_form', $form_state );
	print ajax_render ( $output );
	exit ();
}

function _cowpro_issuing_renewal_form($form, &$form_state) {
	include_once 'cowpro_issuing.repayment_schedule.fun.inc';
	$form ['loan_term'] = array (
	  '#type' => 'select',
	  '#title' => '借款(续期)期限',
	  '#options' => _cowpro_issuing_get_loan_term_options (),
	  '#default_value' => isset ( $issuing ['loan_term'] ) ? $issuing ['loan_term'] : 90,
	  '#input' => TRUE,
	  '#weight' => 50
	);
	
	$form ['annual_rate'] = array (
	  '#type' => 'numberfield',
	  '#title' => '年利率(%)',
	  '#step' => 0.01,
	  '#min' => 0,
	  '#max' => 19.99,
	  '#default_value' => isset ( $issuing ['annual_rate'] ) ? $issuing ['annual_rate'] : 14,
	  '#weight' => 60
	);
	
	$form ['submit'] = array (
			'#type' => 'submit',
			'#value' => '续期',
			'#weight' => 100
	);
	$form ['cancel'] = array (
			'#type' => 'submit',
			'#value' => '取消',
			'#weight' => 200
	);
	return $form;
}

function _cowpro_issuing_renewal_form_submit(&$form, &$form_state) {
	if ($form_state ['values'] ['op'] === $form_state ['values'] ['submit']) {
		$nid = $form_state['nid'];

		//更新issuing的放款时间
		//$node = node_load($nid);
		//$node->field_issuing[LANGUAGE_NONE][0]['make_loans_time'] = REQUEST_TIME;
		//node_save($node);

		_cowpro_issuing_renewal_finished_update_journal($nid, $form_state ['values']['loan_term'], $form_state ['values']['annual_rate']);
		$message = '续期操作已完成';
		drupal_set_message($message);

		ctools_include ( 'modal' );
		ctools_include ( 'ajax' );
		$commands = array ();
		$commands[] = ctools_ajax_command_reload();
		print ajax_render ( $commands );
		exit ();
	} else {
		$commands = array ();
		$commands [] = ctools_modal_command_dismiss ();
		print ajax_render ( $commands );
		exit ();
	}
}

function _cowpro_issuing_renewal_finished_update_journal($nid, $loan_term, $annual_rate) {
	$node = node_load($nid);

	//生成还款计划表
	$issuing = $node->field_issuing [LANGUAGE_NONE] [0];
	$applicant = $node->field_applicant [LANGUAGE_NONE] [0];
	cowpro_issuing_create_repayment_schedule($node->nid, $applicant, $issuing, TRUE, $loan_term, $annual_rate);
}