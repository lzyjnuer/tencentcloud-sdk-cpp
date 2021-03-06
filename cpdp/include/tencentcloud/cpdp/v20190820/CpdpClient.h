/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CPDP_V20190820_CPDPCLIENT_H_
#define TENCENTCLOUD_CPDP_V20190820_CPDPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cpdp/v20190820/model/ApplyWithdrawalRequest.h>
#include <tencentcloud/cpdp/v20190820/model/ApplyWithdrawalResponse.h>
#include <tencentcloud/cpdp/v20190820/model/BindAcctRequest.h>
#include <tencentcloud/cpdp/v20190820/model/BindAcctResponse.h>
#include <tencentcloud/cpdp/v20190820/model/BindRelateAccReUnionPayRequest.h>
#include <tencentcloud/cpdp/v20190820/model/BindRelateAccReUnionPayResponse.h>
#include <tencentcloud/cpdp/v20190820/model/BindRelateAcctSmallAmountRequest.h>
#include <tencentcloud/cpdp/v20190820/model/BindRelateAcctSmallAmountResponse.h>
#include <tencentcloud/cpdp/v20190820/model/BindRelateAcctUnionPayRequest.h>
#include <tencentcloud/cpdp/v20190820/model/BindRelateAcctUnionPayResponse.h>
#include <tencentcloud/cpdp/v20190820/model/CheckAcctRequest.h>
#include <tencentcloud/cpdp/v20190820/model/CheckAcctResponse.h>
#include <tencentcloud/cpdp/v20190820/model/CheckAmountRequest.h>
#include <tencentcloud/cpdp/v20190820/model/CheckAmountResponse.h>
#include <tencentcloud/cpdp/v20190820/model/CloseOrderRequest.h>
#include <tencentcloud/cpdp/v20190820/model/CloseOrderResponse.h>
#include <tencentcloud/cpdp/v20190820/model/CreateAcctRequest.h>
#include <tencentcloud/cpdp/v20190820/model/CreateAcctResponse.h>
#include <tencentcloud/cpdp/v20190820/model/CreateCustAcctIdRequest.h>
#include <tencentcloud/cpdp/v20190820/model/CreateCustAcctIdResponse.h>
#include <tencentcloud/cpdp/v20190820/model/DownloadBillRequest.h>
#include <tencentcloud/cpdp/v20190820/model/DownloadBillResponse.h>
#include <tencentcloud/cpdp/v20190820/model/ModifyMntMbrBindRelateAcctBankCodeRequest.h>
#include <tencentcloud/cpdp/v20190820/model/ModifyMntMbrBindRelateAcctBankCodeResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryBalanceRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryBalanceResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryBankClearRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryBankClearResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryBankTransactionDetailsRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryBankTransactionDetailsResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryBankWithdrawCashDetailsRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryBankWithdrawCashDetailsResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryCommonTransferRechargeRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryCommonTransferRechargeResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryCustAcctIdBalanceRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryCustAcctIdBalanceResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryMemberBindRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryMemberBindResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryMemberTransactionRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryMemberTransactionResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryOrderRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryOrderResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryReconciliationDocumentRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryReconciliationDocumentResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryRefundRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryRefundResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QuerySingleTransactionStatusRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QuerySingleTransactionStatusResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QuerySmallAmountTransferRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QuerySmallAmountTransferResponse.h>
#include <tencentcloud/cpdp/v20190820/model/RechargeMemberThirdPayRequest.h>
#include <tencentcloud/cpdp/v20190820/model/RechargeMemberThirdPayResponse.h>
#include <tencentcloud/cpdp/v20190820/model/RefundRequest.h>
#include <tencentcloud/cpdp/v20190820/model/RefundResponse.h>
#include <tencentcloud/cpdp/v20190820/model/RegisterBillSupportWithdrawRequest.h>
#include <tencentcloud/cpdp/v20190820/model/RegisterBillSupportWithdrawResponse.h>
#include <tencentcloud/cpdp/v20190820/model/RevRegisterBillSupportWithdrawRequest.h>
#include <tencentcloud/cpdp/v20190820/model/RevRegisterBillSupportWithdrawResponse.h>
#include <tencentcloud/cpdp/v20190820/model/ReviseMbrPropertyRequest.h>
#include <tencentcloud/cpdp/v20190820/model/ReviseMbrPropertyResponse.h>
#include <tencentcloud/cpdp/v20190820/model/RevokeMemberRechargeThirdPayRequest.h>
#include <tencentcloud/cpdp/v20190820/model/RevokeMemberRechargeThirdPayResponse.h>
#include <tencentcloud/cpdp/v20190820/model/UnBindAcctRequest.h>
#include <tencentcloud/cpdp/v20190820/model/UnBindAcctResponse.h>
#include <tencentcloud/cpdp/v20190820/model/UnbindRelateAcctRequest.h>
#include <tencentcloud/cpdp/v20190820/model/UnbindRelateAcctResponse.h>
#include <tencentcloud/cpdp/v20190820/model/UnifiedOrderRequest.h>
#include <tencentcloud/cpdp/v20190820/model/UnifiedOrderResponse.h>
#include <tencentcloud/cpdp/v20190820/model/WithdrawCashMembershipRequest.h>
#include <tencentcloud/cpdp/v20190820/model/WithdrawCashMembershipResponse.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            class CpdpClient : public AbstractClient
            {
            public:
                CpdpClient(const Credential &credential, const std::string &region);
                CpdpClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::ApplyWithdrawalResponse> ApplyWithdrawalOutcome;
                typedef std::future<ApplyWithdrawalOutcome> ApplyWithdrawalOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::ApplyWithdrawalRequest&, ApplyWithdrawalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyWithdrawalAsyncHandler;
                typedef Outcome<Error, Model::BindAcctResponse> BindAcctOutcome;
                typedef std::future<BindAcctOutcome> BindAcctOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::BindAcctRequest&, BindAcctOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindAcctAsyncHandler;
                typedef Outcome<Error, Model::BindRelateAccReUnionPayResponse> BindRelateAccReUnionPayOutcome;
                typedef std::future<BindRelateAccReUnionPayOutcome> BindRelateAccReUnionPayOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::BindRelateAccReUnionPayRequest&, BindRelateAccReUnionPayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindRelateAccReUnionPayAsyncHandler;
                typedef Outcome<Error, Model::BindRelateAcctSmallAmountResponse> BindRelateAcctSmallAmountOutcome;
                typedef std::future<BindRelateAcctSmallAmountOutcome> BindRelateAcctSmallAmountOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::BindRelateAcctSmallAmountRequest&, BindRelateAcctSmallAmountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindRelateAcctSmallAmountAsyncHandler;
                typedef Outcome<Error, Model::BindRelateAcctUnionPayResponse> BindRelateAcctUnionPayOutcome;
                typedef std::future<BindRelateAcctUnionPayOutcome> BindRelateAcctUnionPayOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::BindRelateAcctUnionPayRequest&, BindRelateAcctUnionPayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindRelateAcctUnionPayAsyncHandler;
                typedef Outcome<Error, Model::CheckAcctResponse> CheckAcctOutcome;
                typedef std::future<CheckAcctOutcome> CheckAcctOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::CheckAcctRequest&, CheckAcctOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckAcctAsyncHandler;
                typedef Outcome<Error, Model::CheckAmountResponse> CheckAmountOutcome;
                typedef std::future<CheckAmountOutcome> CheckAmountOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::CheckAmountRequest&, CheckAmountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckAmountAsyncHandler;
                typedef Outcome<Error, Model::CloseOrderResponse> CloseOrderOutcome;
                typedef std::future<CloseOrderOutcome> CloseOrderOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::CloseOrderRequest&, CloseOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseOrderAsyncHandler;
                typedef Outcome<Error, Model::CreateAcctResponse> CreateAcctOutcome;
                typedef std::future<CreateAcctOutcome> CreateAcctOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::CreateAcctRequest&, CreateAcctOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAcctAsyncHandler;
                typedef Outcome<Error, Model::CreateCustAcctIdResponse> CreateCustAcctIdOutcome;
                typedef std::future<CreateCustAcctIdOutcome> CreateCustAcctIdOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::CreateCustAcctIdRequest&, CreateCustAcctIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustAcctIdAsyncHandler;
                typedef Outcome<Error, Model::DownloadBillResponse> DownloadBillOutcome;
                typedef std::future<DownloadBillOutcome> DownloadBillOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::DownloadBillRequest&, DownloadBillOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadBillAsyncHandler;
                typedef Outcome<Error, Model::ModifyMntMbrBindRelateAcctBankCodeResponse> ModifyMntMbrBindRelateAcctBankCodeOutcome;
                typedef std::future<ModifyMntMbrBindRelateAcctBankCodeOutcome> ModifyMntMbrBindRelateAcctBankCodeOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::ModifyMntMbrBindRelateAcctBankCodeRequest&, ModifyMntMbrBindRelateAcctBankCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMntMbrBindRelateAcctBankCodeAsyncHandler;
                typedef Outcome<Error, Model::QueryBalanceResponse> QueryBalanceOutcome;
                typedef std::future<QueryBalanceOutcome> QueryBalanceOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryBalanceRequest&, QueryBalanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryBalanceAsyncHandler;
                typedef Outcome<Error, Model::QueryBankClearResponse> QueryBankClearOutcome;
                typedef std::future<QueryBankClearOutcome> QueryBankClearOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryBankClearRequest&, QueryBankClearOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryBankClearAsyncHandler;
                typedef Outcome<Error, Model::QueryBankTransactionDetailsResponse> QueryBankTransactionDetailsOutcome;
                typedef std::future<QueryBankTransactionDetailsOutcome> QueryBankTransactionDetailsOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryBankTransactionDetailsRequest&, QueryBankTransactionDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryBankTransactionDetailsAsyncHandler;
                typedef Outcome<Error, Model::QueryBankWithdrawCashDetailsResponse> QueryBankWithdrawCashDetailsOutcome;
                typedef std::future<QueryBankWithdrawCashDetailsOutcome> QueryBankWithdrawCashDetailsOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryBankWithdrawCashDetailsRequest&, QueryBankWithdrawCashDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryBankWithdrawCashDetailsAsyncHandler;
                typedef Outcome<Error, Model::QueryCommonTransferRechargeResponse> QueryCommonTransferRechargeOutcome;
                typedef std::future<QueryCommonTransferRechargeOutcome> QueryCommonTransferRechargeOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryCommonTransferRechargeRequest&, QueryCommonTransferRechargeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryCommonTransferRechargeAsyncHandler;
                typedef Outcome<Error, Model::QueryCustAcctIdBalanceResponse> QueryCustAcctIdBalanceOutcome;
                typedef std::future<QueryCustAcctIdBalanceOutcome> QueryCustAcctIdBalanceOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryCustAcctIdBalanceRequest&, QueryCustAcctIdBalanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryCustAcctIdBalanceAsyncHandler;
                typedef Outcome<Error, Model::QueryMemberBindResponse> QueryMemberBindOutcome;
                typedef std::future<QueryMemberBindOutcome> QueryMemberBindOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryMemberBindRequest&, QueryMemberBindOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryMemberBindAsyncHandler;
                typedef Outcome<Error, Model::QueryMemberTransactionResponse> QueryMemberTransactionOutcome;
                typedef std::future<QueryMemberTransactionOutcome> QueryMemberTransactionOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryMemberTransactionRequest&, QueryMemberTransactionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryMemberTransactionAsyncHandler;
                typedef Outcome<Error, Model::QueryOrderResponse> QueryOrderOutcome;
                typedef std::future<QueryOrderOutcome> QueryOrderOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryOrderRequest&, QueryOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryOrderAsyncHandler;
                typedef Outcome<Error, Model::QueryReconciliationDocumentResponse> QueryReconciliationDocumentOutcome;
                typedef std::future<QueryReconciliationDocumentOutcome> QueryReconciliationDocumentOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryReconciliationDocumentRequest&, QueryReconciliationDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryReconciliationDocumentAsyncHandler;
                typedef Outcome<Error, Model::QueryRefundResponse> QueryRefundOutcome;
                typedef std::future<QueryRefundOutcome> QueryRefundOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryRefundRequest&, QueryRefundOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryRefundAsyncHandler;
                typedef Outcome<Error, Model::QuerySingleTransactionStatusResponse> QuerySingleTransactionStatusOutcome;
                typedef std::future<QuerySingleTransactionStatusOutcome> QuerySingleTransactionStatusOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QuerySingleTransactionStatusRequest&, QuerySingleTransactionStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QuerySingleTransactionStatusAsyncHandler;
                typedef Outcome<Error, Model::QuerySmallAmountTransferResponse> QuerySmallAmountTransferOutcome;
                typedef std::future<QuerySmallAmountTransferOutcome> QuerySmallAmountTransferOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QuerySmallAmountTransferRequest&, QuerySmallAmountTransferOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QuerySmallAmountTransferAsyncHandler;
                typedef Outcome<Error, Model::RechargeMemberThirdPayResponse> RechargeMemberThirdPayOutcome;
                typedef std::future<RechargeMemberThirdPayOutcome> RechargeMemberThirdPayOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::RechargeMemberThirdPayRequest&, RechargeMemberThirdPayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RechargeMemberThirdPayAsyncHandler;
                typedef Outcome<Error, Model::RefundResponse> RefundOutcome;
                typedef std::future<RefundOutcome> RefundOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::RefundRequest&, RefundOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RefundAsyncHandler;
                typedef Outcome<Error, Model::RegisterBillSupportWithdrawResponse> RegisterBillSupportWithdrawOutcome;
                typedef std::future<RegisterBillSupportWithdrawOutcome> RegisterBillSupportWithdrawOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::RegisterBillSupportWithdrawRequest&, RegisterBillSupportWithdrawOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterBillSupportWithdrawAsyncHandler;
                typedef Outcome<Error, Model::RevRegisterBillSupportWithdrawResponse> RevRegisterBillSupportWithdrawOutcome;
                typedef std::future<RevRegisterBillSupportWithdrawOutcome> RevRegisterBillSupportWithdrawOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::RevRegisterBillSupportWithdrawRequest&, RevRegisterBillSupportWithdrawOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RevRegisterBillSupportWithdrawAsyncHandler;
                typedef Outcome<Error, Model::ReviseMbrPropertyResponse> ReviseMbrPropertyOutcome;
                typedef std::future<ReviseMbrPropertyOutcome> ReviseMbrPropertyOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::ReviseMbrPropertyRequest&, ReviseMbrPropertyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReviseMbrPropertyAsyncHandler;
                typedef Outcome<Error, Model::RevokeMemberRechargeThirdPayResponse> RevokeMemberRechargeThirdPayOutcome;
                typedef std::future<RevokeMemberRechargeThirdPayOutcome> RevokeMemberRechargeThirdPayOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::RevokeMemberRechargeThirdPayRequest&, RevokeMemberRechargeThirdPayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RevokeMemberRechargeThirdPayAsyncHandler;
                typedef Outcome<Error, Model::UnBindAcctResponse> UnBindAcctOutcome;
                typedef std::future<UnBindAcctOutcome> UnBindAcctOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::UnBindAcctRequest&, UnBindAcctOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnBindAcctAsyncHandler;
                typedef Outcome<Error, Model::UnbindRelateAcctResponse> UnbindRelateAcctOutcome;
                typedef std::future<UnbindRelateAcctOutcome> UnbindRelateAcctOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::UnbindRelateAcctRequest&, UnbindRelateAcctOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindRelateAcctAsyncHandler;
                typedef Outcome<Error, Model::UnifiedOrderResponse> UnifiedOrderOutcome;
                typedef std::future<UnifiedOrderOutcome> UnifiedOrderOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::UnifiedOrderRequest&, UnifiedOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnifiedOrderAsyncHandler;
                typedef Outcome<Error, Model::WithdrawCashMembershipResponse> WithdrawCashMembershipOutcome;
                typedef std::future<WithdrawCashMembershipOutcome> WithdrawCashMembershipOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::WithdrawCashMembershipRequest&, WithdrawCashMembershipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> WithdrawCashMembershipAsyncHandler;



                /**
                 *商户提现
                 * @param req ApplyWithdrawalRequest
                 * @return ApplyWithdrawalOutcome
                 */
                ApplyWithdrawalOutcome ApplyWithdrawal(const Model::ApplyWithdrawalRequest &request);
                void ApplyWithdrawalAsync(const Model::ApplyWithdrawalRequest& request, const ApplyWithdrawalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyWithdrawalOutcomeCallable ApplyWithdrawalCallable(const Model::ApplyWithdrawalRequest& request);

                /**
                 *商户绑定提现银行卡，每个商户只能绑定一张提现银行卡
                 * @param req BindAcctRequest
                 * @return BindAcctOutcome
                 */
                BindAcctOutcome BindAcct(const Model::BindAcctRequest &request);
                void BindAcctAsync(const Model::BindAcctRequest& request, const BindAcctAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindAcctOutcomeCallable BindAcctCallable(const Model::BindAcctRequest& request);

                /**
                 *会员绑定提现账户-回填银联鉴权短信码。用于会员填写动态验证码后，发往银行进行验证，验证成功则完成绑定。
                 * @param req BindRelateAccReUnionPayRequest
                 * @return BindRelateAccReUnionPayOutcome
                 */
                BindRelateAccReUnionPayOutcome BindRelateAccReUnionPay(const Model::BindRelateAccReUnionPayRequest &request);
                void BindRelateAccReUnionPayAsync(const Model::BindRelateAccReUnionPayRequest& request, const BindRelateAccReUnionPayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindRelateAccReUnionPayOutcomeCallable BindRelateAccReUnionPayCallable(const Model::BindRelateAccReUnionPayRequest& request);

                /**
                 *会员绑定提现账户-小额鉴权。会员申请绑定提现账户，绑定后从会员子账户中提现到绑定账户。
转账鉴权有两种形式：往账鉴权和来账鉴权。
往账鉴权：该接口发起成功后，银行会向提现账户转入小于等于0.5元的随机金额，并短信通知客户查看，客户查看后，需将收到的金额大小，在电商平台页面上回填，并通知银行。银行验证通过后，完成提现账户绑定。
来账鉴权：该接口发起成功后，银行以短信通知客户查看，客户查看后，需通过待绑定的账户往市场的监管账户转入短信上指定的金额。银行检索到该笔指定金额的来账是源自待绑定账户，则绑定成功。平安银行的账户，即BankType送1时，大小额行号和超级网银号都不用送。
                 * @param req BindRelateAcctSmallAmountRequest
                 * @return BindRelateAcctSmallAmountOutcome
                 */
                BindRelateAcctSmallAmountOutcome BindRelateAcctSmallAmount(const Model::BindRelateAcctSmallAmountRequest &request);
                void BindRelateAcctSmallAmountAsync(const Model::BindRelateAcctSmallAmountRequest& request, const BindRelateAcctSmallAmountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindRelateAcctSmallAmountOutcomeCallable BindRelateAcctSmallAmountCallable(const Model::BindRelateAcctSmallAmountRequest& request);

                /**
                 *会员绑定提现账户-银联鉴权。用于会员申请绑定提现账户，申请后银行前往银联验证卡信息：姓名、证件、卡号、银行预留手机是否相符，相符则发送给会员手机动态验证码并返回成功，不相符则返回失败。
平台接收到银行返回成功后，进入输入动态验证码的页面，有效期120秒，若120秒未输入，客户可点击重新发送动态验证码，这个步骤重新调用该接口即可。
平安银行的账户，大小额行号和超级网银号都不用送。
超级网银号：单笔转账金额不超过5万，不限制笔数，只用选XX银行，不用具体到支行，可实时知道对方是否收款成功。
大小额联行号：单笔转账可超过5万，需具体到支行，不能实时知道对方是否收款成功。金额超过5万的，在工作日的8点30-17点间才会成功。
                 * @param req BindRelateAcctUnionPayRequest
                 * @return BindRelateAcctUnionPayOutcome
                 */
                BindRelateAcctUnionPayOutcome BindRelateAcctUnionPay(const Model::BindRelateAcctUnionPayRequest &request);
                void BindRelateAcctUnionPayAsync(const Model::BindRelateAcctUnionPayRequest& request, const BindRelateAcctUnionPayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindRelateAcctUnionPayOutcomeCallable BindRelateAcctUnionPayCallable(const Model::BindRelateAcctUnionPayRequest& request);

                /**
                 *商户绑定提现银行卡的验证接口
                 * @param req CheckAcctRequest
                 * @return CheckAcctOutcome
                 */
                CheckAcctOutcome CheckAcct(const Model::CheckAcctRequest &request);
                void CheckAcctAsync(const Model::CheckAcctRequest& request, const CheckAcctAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckAcctOutcomeCallable CheckAcctCallable(const Model::CheckAcctRequest& request);

                /**
                 *验证鉴权金额。此接口可受理BindRelateAcctSmallAmount接口发起的转账金额（往账鉴权方式）的验证处理。若所回填的验证金额验证通过，则会绑定原申请中的银行账户作为提现账户。通过此接口也可以查得BindRelateAcctSmallAmount接口发起的来账鉴权方式的申请的当前状态。
                 * @param req CheckAmountRequest
                 * @return CheckAmountOutcome
                 */
                CheckAmountOutcome CheckAmount(const Model::CheckAmountRequest &request);
                void CheckAmountAsync(const Model::CheckAmountRequest& request, const CheckAmountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckAmountOutcomeCallable CheckAmountCallable(const Model::CheckAmountRequest& request);

                /**
                 *通过此接口关闭此前已创建的订单，关闭后，用户将无法继续付款。仅能关闭创建后未支付的订单
                 * @param req CloseOrderRequest
                 * @return CloseOrderOutcome
                 */
                CloseOrderOutcome CloseOrder(const Model::CloseOrderRequest &request);
                void CloseOrderAsync(const Model::CloseOrderRequest& request, const CloseOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseOrderOutcomeCallable CloseOrderCallable(const Model::CloseOrderRequest& request);

                /**
                 *子商户入驻聚鑫平台
                 * @param req CreateAcctRequest
                 * @return CreateAcctOutcome
                 */
                CreateAcctOutcome CreateAcct(const Model::CreateAcctRequest &request);
                void CreateAcctAsync(const Model::CreateAcctRequest& request, const CreateAcctAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAcctOutcomeCallable CreateAcctCallable(const Model::CreateAcctRequest& request);

                /**
                 *会员子账户开立。会员在银行注册，并开立会员子账户，交易网会员代码即会员在平台端系统的会员编号。
平台需保存银行返回的子账户账号，后续交易接口都会用到。会员属性字段为预留扩展字段，当前必须送默认值。
                 * @param req CreateCustAcctIdRequest
                 * @return CreateCustAcctIdOutcome
                 */
                CreateCustAcctIdOutcome CreateCustAcctId(const Model::CreateCustAcctIdRequest &request);
                void CreateCustAcctIdAsync(const Model::CreateCustAcctIdRequest& request, const CreateCustAcctIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCustAcctIdOutcomeCallable CreateCustAcctIdCallable(const Model::CreateCustAcctIdRequest& request);

                /**
                 *账单下载接口，根据本接口返回的URL地址，在D+1日下载对账单。注意，本接口返回的URL地址有时效，请尽快下载。URL超时时效后，请重新调用本接口再次获取。
                 * @param req DownloadBillRequest
                 * @return DownloadBillOutcome
                 */
                DownloadBillOutcome DownloadBill(const Model::DownloadBillRequest &request);
                void DownloadBillAsync(const Model::DownloadBillRequest& request, const DownloadBillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadBillOutcomeCallable DownloadBillCallable(const Model::DownloadBillRequest& request);

                /**
                 *维护会员绑定提现账户联行号。此接口可以支持市场修改会员的提现账户的开户行信息，具体包括开户行行名、开户行的银行联行号（大小额联行号）和超级网银行号。
                 * @param req ModifyMntMbrBindRelateAcctBankCodeRequest
                 * @return ModifyMntMbrBindRelateAcctBankCodeOutcome
                 */
                ModifyMntMbrBindRelateAcctBankCodeOutcome ModifyMntMbrBindRelateAcctBankCode(const Model::ModifyMntMbrBindRelateAcctBankCodeRequest &request);
                void ModifyMntMbrBindRelateAcctBankCodeAsync(const Model::ModifyMntMbrBindRelateAcctBankCodeRequest& request, const ModifyMntMbrBindRelateAcctBankCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMntMbrBindRelateAcctBankCodeOutcomeCallable ModifyMntMbrBindRelateAcctBankCodeCallable(const Model::ModifyMntMbrBindRelateAcctBankCodeRequest& request);

                /**
                 *子商户余额查询
                 * @param req QueryBalanceRequest
                 * @return QueryBalanceOutcome
                 */
                QueryBalanceOutcome QueryBalance(const Model::QueryBalanceRequest &request);
                void QueryBalanceAsync(const Model::QueryBalanceRequest& request, const QueryBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryBalanceOutcomeCallable QueryBalanceCallable(const Model::QueryBalanceRequest& request);

                /**
                 *查询银行在途清算结果。查询时间段内交易网的在途清算结果。
                 * @param req QueryBankClearRequest
                 * @return QueryBankClearOutcome
                 */
                QueryBankClearOutcome QueryBankClear(const Model::QueryBankClearRequest &request);
                void QueryBankClearAsync(const Model::QueryBankClearRequest& request, const QueryBankClearAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryBankClearOutcomeCallable QueryBankClearCallable(const Model::QueryBankClearRequest& request);

                /**
                 *查询银行时间段内交易明细。查询时间段的会员成功交易。
                 * @param req QueryBankTransactionDetailsRequest
                 * @return QueryBankTransactionDetailsOutcome
                 */
                QueryBankTransactionDetailsOutcome QueryBankTransactionDetails(const Model::QueryBankTransactionDetailsRequest &request);
                void QueryBankTransactionDetailsAsync(const Model::QueryBankTransactionDetailsRequest& request, const QueryBankTransactionDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryBankTransactionDetailsOutcomeCallable QueryBankTransactionDetailsCallable(const Model::QueryBankTransactionDetailsRequest& request);

                /**
                 *查询银行时间段内清分提现明细。查询银行时间段内清分提现明细接口：若为“见证+收单退款”“见证+收单充值”记录时备注Note为“见证+收单充值,订单号”“见证+收单退款,订单号”，此接口可以查到T0/T1的充值明细和退款记录。查询标志：充值记录仍用3清分选项查询，退款记录同提现用2选项查询。
                 * @param req QueryBankWithdrawCashDetailsRequest
                 * @return QueryBankWithdrawCashDetailsOutcome
                 */
                QueryBankWithdrawCashDetailsOutcome QueryBankWithdrawCashDetails(const Model::QueryBankWithdrawCashDetailsRequest &request);
                void QueryBankWithdrawCashDetailsAsync(const Model::QueryBankWithdrawCashDetailsRequest& request, const QueryBankWithdrawCashDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryBankWithdrawCashDetailsOutcomeCallable QueryBankWithdrawCashDetailsCallable(const Model::QueryBankWithdrawCashDetailsRequest& request);

                /**
                 *查询普通转账充值明细。接口用于查询会员主动转账进资金汇总账户的明细情况。若会员使用绑定账号转入，则直接入账到会员子账户。若未使用绑定账号转入，则系统无法自动清分到对应子账户，则转入挂账子账户由平台自行清分。若是 “见证+收单充值”T0充值记录时备注Note为“见证+收单充值,订单号” 此接口可以查到T0到账的“见证+收单充值”充值记录。
                 * @param req QueryCommonTransferRechargeRequest
                 * @return QueryCommonTransferRechargeOutcome
                 */
                QueryCommonTransferRechargeOutcome QueryCommonTransferRecharge(const Model::QueryCommonTransferRechargeRequest &request);
                void QueryCommonTransferRechargeAsync(const Model::QueryCommonTransferRechargeRequest& request, const QueryCommonTransferRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryCommonTransferRechargeOutcomeCallable QueryCommonTransferRechargeCallable(const Model::QueryCommonTransferRechargeRequest& request);

                /**
                 *查询银行子账户余额。查询会员子账户以及平台的功能子账户的余额。
                 * @param req QueryCustAcctIdBalanceRequest
                 * @return QueryCustAcctIdBalanceOutcome
                 */
                QueryCustAcctIdBalanceOutcome QueryCustAcctIdBalance(const Model::QueryCustAcctIdBalanceRequest &request);
                void QueryCustAcctIdBalanceAsync(const Model::QueryCustAcctIdBalanceRequest& request, const QueryCustAcctIdBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryCustAcctIdBalanceOutcomeCallable QueryCustAcctIdBalanceCallable(const Model::QueryCustAcctIdBalanceRequest& request);

                /**
                 *会员绑定信息查询。查询标志为“单个会员”的情况下，返回该会员的有效的绑定账户信息。
查询标志为“全部会员”的情况下，返回市场下的全部的有效的绑定账户信息。查询标志为“单个会员的证件信息”的情况下，返回市场下的指定的会员的留存在电商见证宝系统的证件信息。
                 * @param req QueryMemberBindRequest
                 * @return QueryMemberBindOutcome
                 */
                QueryMemberBindOutcome QueryMemberBind(const Model::QueryMemberBindRequest &request);
                void QueryMemberBindAsync(const Model::QueryMemberBindRequest& request, const QueryMemberBindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryMemberBindOutcomeCallable QueryMemberBindCallable(const Model::QueryMemberBindRequest& request);

                /**
                 *会员间交易-不验证。此接口可以实现会员间的余额的交易，实现资金在会员之间流动。
                 * @param req QueryMemberTransactionRequest
                 * @return QueryMemberTransactionOutcome
                 */
                QueryMemberTransactionOutcome QueryMemberTransaction(const Model::QueryMemberTransactionRequest &request);
                void QueryMemberTransactionAsync(const Model::QueryMemberTransactionRequest& request, const QueryMemberTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryMemberTransactionOutcomeCallable QueryMemberTransactionCallable(const Model::QueryMemberTransactionRequest& request);

                /**
                 *根据订单号，或者用户Id，查询支付订单状态 
                 * @param req QueryOrderRequest
                 * @return QueryOrderOutcome
                 */
                QueryOrderOutcome QueryOrder(const Model::QueryOrderRequest &request);
                void QueryOrderAsync(const Model::QueryOrderRequest& request, const QueryOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryOrderOutcomeCallable QueryOrderCallable(const Model::QueryOrderRequest& request);

                /**
                 *查询对账文件信息。平台调用该接口获取需下载对账文件的文件名称以及密钥。 平台获取到信息后， 可以再调用OPENAPI的文件下载功能。
                 * @param req QueryReconciliationDocumentRequest
                 * @return QueryReconciliationDocumentOutcome
                 */
                QueryReconciliationDocumentOutcome QueryReconciliationDocument(const Model::QueryReconciliationDocumentRequest &request);
                void QueryReconciliationDocumentAsync(const Model::QueryReconciliationDocumentRequest& request, const QueryReconciliationDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryReconciliationDocumentOutcomeCallable QueryReconciliationDocumentCallable(const Model::QueryReconciliationDocumentRequest& request);

                /**
                 *提交退款申请后，通过调用该接口查询退款状态。退款可能有一定延时，用微信零钱支付的退款约20分钟内到账，银行卡支付的退款约3个工作日后到账。
                 * @param req QueryRefundRequest
                 * @return QueryRefundOutcome
                 */
                QueryRefundOutcome QueryRefund(const Model::QueryRefundRequest &request);
                void QueryRefundAsync(const Model::QueryRefundRequest& request, const QueryRefundAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryRefundOutcomeCallable QueryRefundCallable(const Model::QueryRefundRequest& request);

                /**
                 *查询银行单笔交易状态。查询单笔交易的状态。
                 * @param req QuerySingleTransactionStatusRequest
                 * @return QuerySingleTransactionStatusOutcome
                 */
                QuerySingleTransactionStatusOutcome QuerySingleTransactionStatus(const Model::QuerySingleTransactionStatusRequest &request);
                void QuerySingleTransactionStatusAsync(const Model::QuerySingleTransactionStatusRequest& request, const QuerySingleTransactionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QuerySingleTransactionStatusOutcomeCallable QuerySingleTransactionStatusCallable(const Model::QuerySingleTransactionStatusRequest& request);

                /**
                 *查询小额鉴权转账结果。查询小额往账鉴权的转账状态。
                 * @param req QuerySmallAmountTransferRequest
                 * @return QuerySmallAmountTransferOutcome
                 */
                QuerySmallAmountTransferOutcome QuerySmallAmountTransfer(const Model::QuerySmallAmountTransferRequest &request);
                void QuerySmallAmountTransferAsync(const Model::QuerySmallAmountTransferRequest& request, const QuerySmallAmountTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QuerySmallAmountTransferOutcomeCallable QuerySmallAmountTransferCallable(const Model::QuerySmallAmountTransferRequest& request);

                /**
                 *见证宝-会员在途充值(经第三方支付渠道)
                 * @param req RechargeMemberThirdPayRequest
                 * @return RechargeMemberThirdPayOutcome
                 */
                RechargeMemberThirdPayOutcome RechargeMemberThirdPay(const Model::RechargeMemberThirdPayRequest &request);
                void RechargeMemberThirdPayAsync(const Model::RechargeMemberThirdPayRequest& request, const RechargeMemberThirdPayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RechargeMemberThirdPayOutcomeCallable RechargeMemberThirdPayCallable(const Model::RechargeMemberThirdPayRequest& request);

                /**
                 *如交易订单需退款，可以通过本接口将支付款全部或部分退还给付款方，聚鑫将在收到退款请求并且验证成功之后，按照退款规则将支付款按原路退回到支付帐号。最长支持1年的订单退款。在订单包含多个子订单的情况下，如果使用本接口传入OutTradeNo或TransactionId退款，则只支持全单退款；如果需要部分退款，请通过传入子订单的方式来指定部分金额退款。 
                 * @param req RefundRequest
                 * @return RefundOutcome
                 */
                RefundOutcome Refund(const Model::RefundRequest &request);
                void RefundAsync(const Model::RefundRequest& request, const RefundAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RefundOutcomeCallable RefundCallable(const Model::RefundRequest& request);

                /**
                 *登记挂账(支持撤销)。此接口可实现把不明来账或自有资金等已登记在挂账子账户下的资金调整到普通会员子账户。即通过申请调用此接口，将会减少挂账子账户的资金，调增指定的普通会员子账户的可提现余额及可用余额。此接口不支持把挂账子账户资金清分到功能子账户。
                 * @param req RegisterBillSupportWithdrawRequest
                 * @return RegisterBillSupportWithdrawOutcome
                 */
                RegisterBillSupportWithdrawOutcome RegisterBillSupportWithdraw(const Model::RegisterBillSupportWithdrawRequest &request);
                void RegisterBillSupportWithdrawAsync(const Model::RegisterBillSupportWithdrawRequest& request, const RegisterBillSupportWithdrawAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterBillSupportWithdrawOutcomeCallable RegisterBillSupportWithdrawCallable(const Model::RegisterBillSupportWithdrawRequest& request);

                /**
                 *登记挂账撤销。此接口可以实现把RegisterBillSupportWithdraw接口完成的登记挂账进行撤销，即调减普通会员子账户的可提现和可用余额，调增挂账子账户的可用余额。
                 * @param req RevRegisterBillSupportWithdrawRequest
                 * @return RevRegisterBillSupportWithdrawOutcome
                 */
                RevRegisterBillSupportWithdrawOutcome RevRegisterBillSupportWithdraw(const Model::RevRegisterBillSupportWithdrawRequest &request);
                void RevRegisterBillSupportWithdrawAsync(const Model::RevRegisterBillSupportWithdrawRequest& request, const RevRegisterBillSupportWithdrawAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RevRegisterBillSupportWithdrawOutcomeCallable RevRegisterBillSupportWithdrawCallable(const Model::RevRegisterBillSupportWithdrawRequest& request);

                /**
                 *修改会员属性-普通商户子账户。修改会员的会员属性。
                 * @param req ReviseMbrPropertyRequest
                 * @return ReviseMbrPropertyOutcome
                 */
                ReviseMbrPropertyOutcome ReviseMbrProperty(const Model::ReviseMbrPropertyRequest &request);
                void ReviseMbrPropertyAsync(const Model::ReviseMbrPropertyRequest& request, const ReviseMbrPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReviseMbrPropertyOutcomeCallable ReviseMbrPropertyCallable(const Model::ReviseMbrPropertyRequest& request);

                /**
                 *撤销会员在途充值(经第三方支付渠道)
                 * @param req RevokeMemberRechargeThirdPayRequest
                 * @return RevokeMemberRechargeThirdPayOutcome
                 */
                RevokeMemberRechargeThirdPayOutcome RevokeMemberRechargeThirdPay(const Model::RevokeMemberRechargeThirdPayRequest &request);
                void RevokeMemberRechargeThirdPayAsync(const Model::RevokeMemberRechargeThirdPayRequest& request, const RevokeMemberRechargeThirdPayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RevokeMemberRechargeThirdPayOutcomeCallable RevokeMemberRechargeThirdPayCallable(const Model::RevokeMemberRechargeThirdPayRequest& request);

                /**
                 *商户解除绑定的提现银行卡
                 * @param req UnBindAcctRequest
                 * @return UnBindAcctOutcome
                 */
                UnBindAcctOutcome UnBindAcct(const Model::UnBindAcctRequest &request);
                void UnBindAcctAsync(const Model::UnBindAcctRequest& request, const UnBindAcctAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnBindAcctOutcomeCallable UnBindAcctCallable(const Model::UnBindAcctRequest& request);

                /**
                 *会员解绑提现账户。此接口可以支持会员解除名下的绑定账户关系。
                 * @param req UnbindRelateAcctRequest
                 * @return UnbindRelateAcctOutcome
                 */
                UnbindRelateAcctOutcome UnbindRelateAcct(const Model::UnbindRelateAcctRequest &request);
                void UnbindRelateAcctAsync(const Model::UnbindRelateAcctRequest& request, const UnbindRelateAcctAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindRelateAcctOutcomeCallable UnbindRelateAcctCallable(const Model::UnbindRelateAcctRequest& request);

                /**
                 *应用需要先调用本接口生成支付订单号，并将应答的pay_info透传给聚鑫SDK，拉起客户端（包括微信公众号/微信小程序/客户端App）支付。
                 * @param req UnifiedOrderRequest
                 * @return UnifiedOrderOutcome
                 */
                UnifiedOrderOutcome UnifiedOrder(const Model::UnifiedOrderRequest &request);
                void UnifiedOrderAsync(const Model::UnifiedOrderRequest& request, const UnifiedOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnifiedOrderOutcomeCallable UnifiedOrderCallable(const Model::UnifiedOrderRequest& request);

                /**
                 *会员提现-不验证。此接口受理会员发起的提现申请。会员子账户的可提现余额、可用余额会减少，市场的资金汇总账户(监管账户)会减少相应的发生金额，提现到会员申请的收款账户。		
                 * @param req WithdrawCashMembershipRequest
                 * @return WithdrawCashMembershipOutcome
                 */
                WithdrawCashMembershipOutcome WithdrawCashMembership(const Model::WithdrawCashMembershipRequest &request);
                void WithdrawCashMembershipAsync(const Model::WithdrawCashMembershipRequest& request, const WithdrawCashMembershipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                WithdrawCashMembershipOutcomeCallable WithdrawCashMembershipCallable(const Model::WithdrawCashMembershipRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_CPDPCLIENT_H_
