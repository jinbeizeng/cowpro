<?php

/**
 * @file
 * Definition of views_handler_filter_string.
 */

/**
 * Basic textfield filter to handle string filtering commands
 * including equality, like, not like, etc.
 *
 * @ingroup views_filter_handlers
 */
class cowpro_users_handler_filter_real_name extends views_handler_filter {
  // exposed filter options
  var $always_multiple = TRUE;

  function option_definition() {
  	$options = parent::option_definition();

  	$options['expose']['contains']['required'] = array('default' => FALSE, 'bool' => TRUE);

  	return $options;
  }

  function operators() {
  	$operators = array(
  			'=' => array(
  					'title' => t('Is equal to'),
  					'short' => t('='),
  					'method' => 'op_equal',
  					'values' => 1,
  			),
  	);

  	return $operators;
  }

  /**
   * Build strings from the operators() for 'select' options
   */
  /*
  function operator_options($which = 'title') {
  	$options = array();
  	foreach ($this->operators() as $id => $info) {
  		$options[$id] = $info[$which];
  	}

  	return $options;
  }
  */

  function admin_summary() {
  }

  function operator_form(&$form, &$form_state) {
  	$form['operator'] = array();
  }

  function value_validate($form, &$form_state) {
  }

  function value_form(&$form, &$form_state) {
  	$form['value'] = array(
  			'#type' => 'textfield',
  			'#title' => '用户的真实姓名',
  			'#description' => '用户的真实姓名.',
  	);
  }

  function query() {
      //按drupal文档，ensure_table 方法可以获得指定表在QUERY中的alias
      //但实际上如果 alias 与 table name 不一样的时候，ensure_table 并不能返回我们需要的 alias
      //所以，我们还要判断，如果没有得到 table_alias, 
      //我们还要在 $this->view->query->relationships 中遍历查找指定表的 alias
      $table_alias = $this->view->query->ensure_table('users');
      if (! $table_alias) {
		foreach( $this->view->query->relationships as $key => $value){
			if ($value['base'] == 'users') {
              $table_alias = $key;
            }
        }
      }

  	//$table = $this->ensure_my_table();
  	//$join = new views_join();
  	//$join->construct('cowpro_customer_profile', $this->table_alias, 'uid', 'uid');
  	//$this->query->add_where($this->options['group'], "cowpro_customer_profile.search_field", $this->value, "=");
  	$value = trim($this->value);
  	$subquery = db_select('cowpro_customer_profile', 'profile')->fields('profile', array('uid'))->condition('type', 'real_name')->condition('search_field', "%$value%", 'LIKE');
  	$this->query->add_where($this->options['group'], "$table_alias.uid", $subquery, 'IN');
  }
}
