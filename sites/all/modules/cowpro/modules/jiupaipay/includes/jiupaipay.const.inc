<?php
//当前域名
const SERVER_HOST = "https://test.jinbeizeng.com";

const JPP_OP_BIND_ACCOUNT = '关联九派支付账户';
const JPP_OP_AUTHORIZE = '授权对九派支付帐户操作';

const PLATFORM_ACCOUNT_ON_JIUPAIPAY = 'platform_account_on_jiupaiopay';
const PUBLIC_KEY_ON_JIUPAIPAY = 'public_key_on_jiupaypai';
const PRIVATE_KEY_ON_JIUPAIPAY = 'private_key_on_jiupaipay';

const JPP_URL_RESPONSE = '/cowpro/jiupaipay/response/';
const JPP_URL_NOTIRY = '/cowpro/jiupaipay/callback/';
const JPP_AES_KEY = "JBZ123";  //AES秘钥                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
const JPP_AES_IV = "1a2b3c4c5d6f7d8e";  // AES秘钥偏量
//测试环境
 const JPP_URL = 'https://36.110.98.254:19002/p2pwg/mfcf/';
// 设置交易密码URL
const JPP_REGISTER_TRANSACTION_PASSWORD_URL = "https://36.110.98.254:19001/p2ph5/pc/enterPassword.html";

// 设置修改密码URL
const JPP_MODIFY_TRANSACTION_PASSWORD_URL = "https://36.110.98.254:19001/p2ph5/pc/changePassword.html";

// 设置重置密码URL                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
const JPP_RESET_TRANSACTION_PASSWORD_URL = "https://36.110.98.254:19001/p2ph5/pc/forgetPassword.html";

// 校验交易密码URL
const JPP_CHECK_TRANSACTION_PASSWORD_URL = "https://36.110.98.254:19001/p2ph5/pc/checkPassword.html";

// 绑定银行卡URL
const JPP_BANK_CARD_URL = "https://36.110.98.254:19001/p2ph5/pc/cardBind2.html";

//网关支付前端跳转URL
const JPP_BANK_PAY_FRONT_URL = "/cowpro/jiupaipay/callback/jiupaipay_bank_return";

//网关支付后台通知URL
const JPP_BANK_PAY_BACK_URL = "/cowpro/jiupaipay/callback/jiupaipay_bank_notify";


//网关接口地址
const JPP_BANK_API_URL = "https://tppsgw.dccbj.cn:5188/devportal/ws/cpcnGatePay/rechargerByCpcn";

//测试网关支付秘钥
const PAY_KEY = "87FB9444028A4B14937A1905";

//平台营销台账账号
const JBZ_PM = "jbzPM20171221";


