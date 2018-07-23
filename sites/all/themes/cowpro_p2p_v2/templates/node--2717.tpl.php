<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *	 or print a subset such as render($content['field_example']). Use
 *	 hide($content['field_example']) to temporarily suppress the printing of a
 *	 given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *	 calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $display_submitted: whether submission information should be displayed.
 * - $classes: String of classes that can be used to style contextually through
 *	 CSS. It can be manipulated through the variable $classes_array from
 *	 preprocess functions. The default values can be one or more of the
 *	 following:
 *	 - node: The current template type, i.e., "theming hook".
 *	 - node-[type]: The current node type. For example, if the node is a
 *		 "Blog entry" it would result in "node-blog". Note that the machine
 *		 name will often be in a short form of the human readable label.
 *	 - node-teaser: Nodes in teaser form.
 *	 - node-preview: Nodes in preview mode.
 *	 The following are controlled through the node publishing options.
 *	 - node-promoted: Nodes promoted to the front page.
 *	 - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *		 listings.
 *	 - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *	 modules, intended to be displayed in front of the main title tag that
 *	 appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *	 modules, intended to be displayed after the main title tag that appears in
 *	 the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *	 into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *	 teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *	 main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
?>
<style>
    body,html{width:100%;font-size: 48px;}
    body {
      background: #f5f5f5 !important;
      color: #323232;
      font-size: 0.14rem;
      overflow: auto;
      overflow-scrolling: touch;
      user-select: none;
      text-size-adjust: none;
      font-family: PingFang SC, 'Microsoft YaHei', Arial;
    }
    footer ul li p {
    font-size: 0.28rem;
}
</style>
<div class="content_box4 content_box content_box4_top">
    <div class="wrap1 wrap">
        <h2>平台简介</h2>
        <div class="img1"></div>
        <p>金贝增（<a href="https://www.jibeizeng.com/">www.jinbeizeng.com</a>），是专业从事互联网金融信息服务的中介服务平台，平台成立于2015年1月上线运营，隶属于湖北余钱宝互联网科技有限公司，公司以“让投资更安全，让融资更简单”为核心理念，以“服务社会，普惠大众”为己任。2017年金贝增与宜宾市商业银行签订资金存管协议，资金存管系统已于2018年1月正式上线，平台以优质资产端为依托，专注抵押资产，致力于为小微企业提供专业金融信息服务，为投资人提供安全、稳健、高效、透明的金融信息中介服务。</p>
        <p>金贝增拥有高效专业的管理团队，核心高管均拥有多年金融行业从业经验，具有丰富的管理经验和强大的风控能力，平台的风控水平及技术信息等安全措施均达银行级标准。</p>
        <p>作为第三方信息平台，金贝增将一直致力连接投资者闲散资金与有融资需求的优质中小企业，践行普惠金融。</p>
    </div>
    <div class="wrap2 wrap">
        <h2>企业信息</h2>
        <ul>
            <li class="clearlist">
                <div class="l_t">公司全称</div>
                <div class="r_info">湖北余钱宝互联网科技有限公司</div>
            </li>
            <li class="clearlist">
                <div class="l_t">统一社会信用代码</div>
                <div class="r_info">91420600316544581F</div>
            </li>
            <li class="clearlist">
                <div class="l_t">注册资本</div>
                <div class="r_info">3000万人民币</div>
            </li>
            <li class="clearlist">
                <div class="l_t">注册地址</div>
                <div class="r_info">襄阳市襄城区隆中路18号职业技术学院致远楼</div>
            </li>
            <li class="clearlist">
                <div class="l_t">经营地址及通讯地址</div>
                <div class="r_info">襄阳市樊城区卧龙大道东侧环球金融城1号楼9层</div>
            </li>
            <li class="clearlist">
                <div class="l_t">成立时间</div>
                <div class="r_info">2014年9月25日</div>
            </li>
            <li class="clearlist">
                <div class="l_t">经营期限</div>
                <div class="r_info">长期</div>
            </li>
            <li class="clearlist">
                <div class="l_t">经营状态</div>
                <div class="r_info">存续（在营、开业、在册）</div>
            </li>
            <li class="clearlist">
                <div class="l_t">经营范围</div>
                <div class="r_info">信息科技技术、计算机技术领域内的科技开发、技术咨询、技术服务、技术转让；经济信息咨询；会议服务；数据处理；市场调查；计算机系统服务；贷款手续代办；接受金融机构委托从事金融信息技术外包、金融业务流程外包、金融知识流程外包。</div>
            </li>
            <li class="clearlist">
                <div class="l_t">法人</div>
                <div class="r_info">陈斌</div>
            </li>
            <li class="clearlist">
                <div class="l_t">执行董事兼总经理</div>
                <div class="r_info">陈斌</div>
            </li>
            <li class="clearlist">
                <div class="l_t">监事</div>
                <div class="r_info">黄明宣</div>
            </li>
            <li class="clearlist">
                <div class="l_t">高级管理人员</div>
                <div class="r_info">陈斌、黄明宣、刘俊玲</div>
            </li>
            <li class="clearlist">
                <div class="l_t">实际控制人</div>
                <div class="r_info">陈斌</div>
            </li>
            <li class="clearlist">
                <div class="l_t">股东信息（持股超过5%）</div>
                <div class="r_info">湖北标准亚联控股有限公司占股56%；<br>刘俊玲占股10%；<br>黄明宣占股9%；<br>王雪冰占股5%；<br>周小丽占股5%；</div>
            </li>
        </ul>
    </div>
    <div class="wrap2 wrap">
        <h2>平台信息</h2>
        <ul>
            <li class="clearlist">
                <div class="l_t">平台名称</div>
                <div class="r_info">金贝增</div>
            </li>
            <li class="clearlist">
                <div class="l_t">平台网址</div>
                <div class="r_info"><a href="https://www.jibeizeng.com/">www.jinbeizeng.com</a></div>
            </li>
            <li class="clearlist">
                <div class="l_t">资金存管机构</div>
                <div class="r_info">宜宾市商业银行</div>
            </li>
            <li class="clearlist">
                <div class="l_t">微信公众号</div>
                <div class="r_info">金贝增</div>
            </li>
            <li class="clearlist">
                <div class="l_t">平台运营上线的时间</div>
                <div class="r_info">2015年1月21日</div>
            </li>
            <li class="clearlist">
                <div class="l_t">ICP备案号</div>
                <div class="r_info">鄂ICP备14020305号-1</div>
            </li>
        </ul>
    </div>
    <div class="wrap3 wrap">
        <h2>组织架构</h2>
        <div class="img2"><img src="<?php echo $GLOBALS['base_url'] . '/' . drupal_get_path('theme', 'cowpro_p2p_v2') . '/images/img2-banner.jpg'; ?>"></div>
    </div>
    <div class="wrap4 wrap">
        <h2>公司资质</h2>
        <ul>
            <li style="padding-top:5px;"><img src="<?php echo $GLOBALS['base_url'] . '/' . drupal_get_path('theme', 'cowpro_p2p_v2') . '/images/yyzz.jpg'; ?>" alt=""></li>
          <li style="padding-top:5px;"><img src="<?php echo $GLOBALS['base_url'] . '/' . drupal_get_path('theme', 'cowpro_p2p_v2') . '/images/sjdb.jpg'; ?>" alt=""></li>
        </ul>
    </div>
    <div class="wrap5 wrap">
        <h2>银行存管协议</h2>
        <ul>
          <li style="padding-top:5px;"><img src="<?php echo $GLOBALS['base_url'] . '/' . drupal_get_path('theme', 'cowpro_p2p_v2') . '/images/cgxy-1.jpg'; ?>" alt=""></li>
          <li style="padding-top:5px;"><img src="<?php echo $GLOBALS['base_url'] . '/' . drupal_get_path('theme', 'cowpro_p2p_v2') . '/images/cgxy-2.jpg'; ?>" alt=""></li>
          <li style="padding-top:5px;"><img src="<?php echo $GLOBALS['base_url'] . '/' . drupal_get_path('theme', 'cowpro_p2p_v2') . '/images/cgxy-3.jpg'; ?>" alt=""></li>
        </ul>
    </div>
</div>