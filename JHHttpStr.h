//
//  JHHttpStr.h
//  ShellForHtml5
//
//  Created by TFS on 2018/4/18.
//

#ifndef JHHttpStr_h
#define JHHttpStr_h

#ifdef DEBUG
//测试
#define http_host @"http://test.juhuizhitou.com/"
#else
//生产
//#define http_host @"http://jhzt.juhuizhitou.com/"
#define http_host @"http://test.juhuizhitou.com/"//dev/justDev

#endif

#pragma mark - 注册/登录
//判断是否注册/登录
#define appLoginCheckMobileState @"app/login/checkMobileState.htm"
//注册获取短信验证码
#define appLoginTfsSendVerCode @"app/login/tfsSendVerCode.htm"
//注册
#define appLoginUserRegister @"app/login/userRegister.htm"
//登录
#define appLoginUserLogin @"app/login/userLogin.htm"
//退出登陆
#define appLoginUserLogout @"app/login/userLogout.htm"

#pragma mark - 开户
//开户
#define openAccountBandingBankInfo @"openAccount/bandingBankInfo.htm"
//开户发送短信验证码
#define openAccountBankSendVerCode @"openAccount/bankSendVerCode.htm"
//获取实名认证银行协议
#define openAccountGetContracts @"openAccount/getContracts.htm"
//获取支持的银行列表信息
#define openAccountGetBankList @"openAccount/getBankList.htm"
//开户校验数据
#define openAccountCheckBindingData @"openAccount/checkBindingData.htm"
//获取风险测评题目
#define openAccountGetRiskQuestion @"openAccount/getRiskQuestion.htm"
//获取风险测评结果
#define openAccountGetRiskResult @"openAccount/getRiskResult.htm"

#pragma mark - 首页
//获取app首页信息
#define indexGetAppIndexInfo @"index/getAppIndexInfo.htm"
//获取精彩活动信息
#define indexGetActivityInfo @"index/getActivityInfo.htm"
//获取资讯研报信息
#define indexGetInformationReport @"index/getInformationReport.htm"
//消息中心初始化
#define indexGetMessageCenterInfo @"index/getMessageCenterInfo.htm"
//系统消息初始化
#define indexGetSystemMessageInfo @"index/getSystemMessageInfo.htm"
//记录红点信息
#define indexSaveRedInfo @"index/saveRedInfo.htm"
//获取红点信息
#define indexGetRedInfo @"index/getRedInfo.htm"

#pragma mark - 我的
//获取银行卡信息
#define personalCenterGetBankInfo @"personalCenter/getBankInfo.htm"
//发送短信(regMobile发送短信号码，找回交易密码的时候不用传，找回登陆密码的时候传；sendFrom短信来源，传1或者2，1找回登陆密码 2找回交易密码)
#define personalCenterSendMsg @"personalCenter/sendMsg.htm"
//找回登陆密码-提交
#define personalCenterFindLoginPassword @"personalCenter/findLoginPassword.htm"
//找回交易密码-提交
#define personalCenterFindTradePassword @"personalCenter/findTradePassword.htm"
//修改登陆密码
#define personalCenterUpdateLoginPassword @"personalCenter/updateLoginPassword.htm"
//修改交易密码
#define personalCenterUpdateTradePassword @"personalCenter/updateTradePassword.htm"
//获取版本信息
#define personalCenterGetNewVersion @"personalCenter/getNewVersion.htm"
//验证登陆密码
#define personalCenterCheckLoginPassword @"personalCenter/checkLoginPassword.htm"
//意见反馈
#define personalCenterFeedBack @"personalCenter/feedBack.htm"
//获取用户信息
#define personalCenterGetCustInfo @"personalCenter/getCustInfo.htm"
//获取用户信息
#define personalCenterGetCustInfo @"personalCenter/getCustInfo.htm"
//保存个人资料
#define personalCenterAddPersonalInfo @"personalCenter/addPersonalInfo.htm"

#pragma mark - 资产
//资产首页获取资产信息
#define assetsGetUserTotalAssets @"assets/getUserTotalAssets.htm"
//获取交易记录
#define assetsGetTradeRecord @"assets/getTradeRecord.htm"
//获取资产分布数据接口
#define assetsGetDistributionOfAssets @"assets/getDistributionOfAssets.htm"
//获取用户持仓资产
#define assetsGetInvestHoldings @"assets/getInvestHoldings.htm"

#pragma mark - 理财
//理财首页信息接口
#define financialGetFinancialIndexInfo @"financial/getFinancialIndexInfo.htm"
//获取基金搜索页面信息
#define financialGetFundSearchInfo @"financial/getFundSearchInfo.htm"
//添加自选
#define financialSaveChooseFundInfo @"financial/saveChooseFundInfo.htm"
//删除自选
#define financialDelChooseFundInfo @"financial/delChooseFundInfo.htm"
//查看自选信息
#define financialGetChooseFundInfo @"financial/getChooseFundInfo.htm"
//获取所有推荐组合
#define financialGetAllPortfolio @"financial/getAllPortfolio.htm"
//智能投顾获取组合信息
#define indexGetRecommendedPortfolio @"index/getRecommendedPortfolio.htm"
//获取组合基金详情
#define financialGetPortfolioDetails @"financial/getPortfolioDetails.htm"
//获取组合走势
#define financialGetCombinedMovements @"financial/getCombinedMovements.htm"
//基金排行页获取基金信息
#define financialGetFundInfo @"financial/getFundInfo.htm"
//获取基金详情页面信息
#define financialGetFundIndexInfo @"financial/getFundIndexInfo.htm"
//基金首页获取基金信息
#define financialGetFundInfo @"financial/getFundInfo.htm"
//基金公告
#define financialGetFundAnnouncementInfo @"financial/getFundAnnouncementInfo.htm"
//私募首页信息
#define privateFundGetPrivateFundIndexInfo @"privateFund/getPrivateFundIndexInfo.htm"
//私募认证
#define privateFundPrivateFundCertifi @"privateFund/privateFundCertifi.htm"
//获取私募详情
#define privateFundGetPrivateFundDetail @"privateFund/getPrivateFundDetail.htm"
//预约私募
#define privateFundAppointmentInfo @"privateFund/appointmentInfo.htm"

#pragma mark - 交易
//基金详情页面点击买入
#define tradeToBuyFund @"trade/toBuyFund.htm"
//获取申购费率和费用
#define tradeGetBuyFeeAndCharge @"trade/getBuyFeeAndCharge.htm"
//校验用户持有卡是否需要重新鉴权
#define tradeVerifyBankInformation @"trade/verifyBankInformation.htm"
//用户持有卡重新鉴权（发送验证码）
#define tradeVerifyBankInformationSendOtp @"trade/verifyBankInformationSendOtp.htm"
//用户持有卡重新鉴权（校验验证码）
#define tradeVerifyBankInformationVerifyOtp @"trade/verifyBankInformationVerifyOtp.htm"
//申购确认
#define tradeCheckBuyData @"trade/checkBuyData.htm"
//申购发送短信验证码
#define tradeSendAccountOtp @"trade/sendAccountOtp.htm"
//购买基金（输入验证码、交易密码点击确认）
#define tradeBuyFundTransaction @"trade/buyFundTransaction.htm"
//基金详情页面点击卖出
#define tradeToSellFund @"trade/toSellFund.htm"
//获取赎回费率和费用
#define tradeGetSellFeeAndCharge @"trade/getSellFeeAndCharge.htm"
//赎回基金（输入验证码、交易密码点击确认）
#define tradeSellFundTransaction @"trade/sellFundTransaction.htm"

#pragma mark - 基金详情
//业绩走势(非货币)
#define financialGetPerforamnceChart @"financial/getPerforamnceChart.htm"
//七日年化收益走势(货币)
#define financialGetFundPerformanceInfo @"financial/getFundPerformanceInfo.htm"
//基金简介
#define financialGetFundIntroduction @"financial/getFundIntroduction.htm"
//获取分红信息
#define financialGetDividendInfo @"financial/getDividendInfo.htm"
//获取分拆信息
#define financialGetSplitInfo @"financial/getSplitInfo.htm"
//基金资产配置
#define financialGetFundAssetInfo @"financial/getFundAssetInfo.htm"
//获取基金经理信息
#define financialGetFundManager @"financial/getFundManager.htm"
//交易规则
#define financialGetTradingRules @"financial/getTradingRules.htm"

#pragma mark - 新手活动
//查看获奖用户信息
#define activityWinningUser @"activity/winningUser.htm"
//查看用户是否投资
#define activityGetUserIsInvestment @"activity/getUserIsInvestment.htm"
//获取用户奖品信息
#define activityMyPrize @"activity/myPrize.htm"

#endif /* JHHttpStr_h */
