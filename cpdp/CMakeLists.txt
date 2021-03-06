#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(cpdp_public_header
  include/tencentcloud/cpdp/v20190820/CpdpClient.h
  )

set(cpdp_public_header_model
  include/tencentcloud/cpdp/v20190820/model/CheckAcctRequest.h
  include/tencentcloud/cpdp/v20190820/model/QueryOrderRequest.h
  include/tencentcloud/cpdp/v20190820/model/CheckAmountResponse.h
  include/tencentcloud/cpdp/v20190820/model/QueryOrderOutOrderList.h
  include/tencentcloud/cpdp/v20190820/model/UnBindAcctRequest.h
  include/tencentcloud/cpdp/v20190820/model/Acct.h
  include/tencentcloud/cpdp/v20190820/model/RevRegisterBillSupportWithdrawResponse.h
  include/tencentcloud/cpdp/v20190820/model/BindAcctResponse.h
  include/tencentcloud/cpdp/v20190820/model/CreateAcctResponse.h
  include/tencentcloud/cpdp/v20190820/model/QuerySingleTransactionStatusRequest.h
  include/tencentcloud/cpdp/v20190820/model/UnifiedOrderInSubOrderList.h
  include/tencentcloud/cpdp/v20190820/model/QuerySmallAmountTransferRequest.h
  include/tencentcloud/cpdp/v20190820/model/QueryBankClearRequest.h
  include/tencentcloud/cpdp/v20190820/model/ModifyMntMbrBindRelateAcctBankCodeRequest.h
  include/tencentcloud/cpdp/v20190820/model/RevokeMemberRechargeThirdPayResponse.h
  include/tencentcloud/cpdp/v20190820/model/BindRelateAccReUnionPayRequest.h
  include/tencentcloud/cpdp/v20190820/model/CreateCustAcctIdResponse.h
  include/tencentcloud/cpdp/v20190820/model/QueryBankTransactionDetailsRequest.h
  include/tencentcloud/cpdp/v20190820/model/RefundResponse.h
  include/tencentcloud/cpdp/v20190820/model/UnifiedOrderResponse.h
  include/tencentcloud/cpdp/v20190820/model/DownloadBillRequest.h
  include/tencentcloud/cpdp/v20190820/model/QueryBankWithdrawCashDetailsRequest.h
  include/tencentcloud/cpdp/v20190820/model/RevRegisterBillSupportWithdrawRequest.h
  include/tencentcloud/cpdp/v20190820/model/QueryCustAcctIdBalanceResponse.h
  include/tencentcloud/cpdp/v20190820/model/QueryCustAcctIdBalanceRequest.h
  include/tencentcloud/cpdp/v20190820/model/DownloadBillResponse.h
  include/tencentcloud/cpdp/v20190820/model/RechargeMemberThirdPayResponse.h
  include/tencentcloud/cpdp/v20190820/model/BindAcctRequest.h
  include/tencentcloud/cpdp/v20190820/model/ReviseMbrPropertyRequest.h
  include/tencentcloud/cpdp/v20190820/model/WithdrawCashMembershipResponse.h
  include/tencentcloud/cpdp/v20190820/model/QueryBankWithdrawCashDetailsResponse.h
  include/tencentcloud/cpdp/v20190820/model/TransferItem.h
  include/tencentcloud/cpdp/v20190820/model/RegisterBillSupportWithdrawResponse.h
  include/tencentcloud/cpdp/v20190820/model/WithdrawCashMembershipRequest.h
  include/tencentcloud/cpdp/v20190820/model/QueryReconciliationDocumentRequest.h
  include/tencentcloud/cpdp/v20190820/model/UnbindRelateAcctResponse.h
  include/tencentcloud/cpdp/v20190820/model/BindRelateAcctUnionPayRequest.h
  include/tencentcloud/cpdp/v20190820/model/CheckAmountRequest.h
  include/tencentcloud/cpdp/v20190820/model/CreateAcctRequest.h
  include/tencentcloud/cpdp/v20190820/model/RechargeMemberThirdPayRequest.h
  include/tencentcloud/cpdp/v20190820/model/QueryMemberBindRequest.h
  include/tencentcloud/cpdp/v20190820/model/BindRelateAcctSmallAmountResponse.h
  include/tencentcloud/cpdp/v20190820/model/QueryMemberTransactionResponse.h
  include/tencentcloud/cpdp/v20190820/model/RegisterBillSupportWithdrawRequest.h
  include/tencentcloud/cpdp/v20190820/model/RefundOutSubOrderRefundList.h
  include/tencentcloud/cpdp/v20190820/model/UnbindRelateAcctRequest.h
  include/tencentcloud/cpdp/v20190820/model/ModifyMntMbrBindRelateAcctBankCodeResponse.h
  include/tencentcloud/cpdp/v20190820/model/QueryBalanceRequest.h
  include/tencentcloud/cpdp/v20190820/model/QuerySmallAmountTransferResponse.h
  include/tencentcloud/cpdp/v20190820/model/ApplyWithdrawalRequest.h
  include/tencentcloud/cpdp/v20190820/model/QueryRefundRequest.h
  include/tencentcloud/cpdp/v20190820/model/CreateCustAcctIdRequest.h
  include/tencentcloud/cpdp/v20190820/model/QueryBankClearResponse.h
  include/tencentcloud/cpdp/v20190820/model/BindRelateAcctSmallAmountRequest.h
  include/tencentcloud/cpdp/v20190820/model/QueryRefundResponse.h
  include/tencentcloud/cpdp/v20190820/model/UnBindAcctResponse.h
  include/tencentcloud/cpdp/v20190820/model/QuerySingleTransactionStatusResponse.h
  include/tencentcloud/cpdp/v20190820/model/QueryMemberBindResponse.h
  include/tencentcloud/cpdp/v20190820/model/QueryCommonTransferRechargeRequest.h
  include/tencentcloud/cpdp/v20190820/model/QueryItem.h
  include/tencentcloud/cpdp/v20190820/model/TranItem.h
  include/tencentcloud/cpdp/v20190820/model/ClearItem.h
  include/tencentcloud/cpdp/v20190820/model/BindRelateAcctUnionPayResponse.h
  include/tencentcloud/cpdp/v20190820/model/CloseOrderRequest.h
  include/tencentcloud/cpdp/v20190820/model/ApplyWithdrawalResponse.h
  include/tencentcloud/cpdp/v20190820/model/QueryBalanceResponse.h
  include/tencentcloud/cpdp/v20190820/model/QueryBankTransactionDetailsResponse.h
  include/tencentcloud/cpdp/v20190820/model/QueryOrderOutSubOrderList.h
  include/tencentcloud/cpdp/v20190820/model/ReviseMbrPropertyResponse.h
  include/tencentcloud/cpdp/v20190820/model/UnifiedOrderRequest.h
  include/tencentcloud/cpdp/v20190820/model/QueryCommonTransferRechargeResponse.h
  include/tencentcloud/cpdp/v20190820/model/RevokeMemberRechargeThirdPayRequest.h
  include/tencentcloud/cpdp/v20190820/model/QueryMemberTransactionRequest.h
  include/tencentcloud/cpdp/v20190820/model/TransactionItem.h
  include/tencentcloud/cpdp/v20190820/model/CheckAcctResponse.h
  include/tencentcloud/cpdp/v20190820/model/QueryReconciliationDocumentResponse.h
  include/tencentcloud/cpdp/v20190820/model/QueryOrderResponse.h
  include/tencentcloud/cpdp/v20190820/model/RefundRequest.h
  include/tencentcloud/cpdp/v20190820/model/BindRelateAccReUnionPayResponse.h
  include/tencentcloud/cpdp/v20190820/model/CloseOrderResponse.h
  include/tencentcloud/cpdp/v20190820/model/FileItem.h
  include/tencentcloud/cpdp/v20190820/model/WithdrawItem.h
  )

set(cpdp_src
  src/v20190820/CpdpClient.cpp
  src/v20190820/model/CheckAcctRequest.cpp
  src/v20190820/model/QueryOrderRequest.cpp
  src/v20190820/model/CheckAmountResponse.cpp
  src/v20190820/model/QueryOrderOutOrderList.cpp
  src/v20190820/model/UnBindAcctRequest.cpp
  src/v20190820/model/Acct.cpp
  src/v20190820/model/RevRegisterBillSupportWithdrawResponse.cpp
  src/v20190820/model/BindAcctResponse.cpp
  src/v20190820/model/CreateAcctResponse.cpp
  src/v20190820/model/QuerySingleTransactionStatusRequest.cpp
  src/v20190820/model/UnifiedOrderInSubOrderList.cpp
  src/v20190820/model/QuerySmallAmountTransferRequest.cpp
  src/v20190820/model/QueryBankClearRequest.cpp
  src/v20190820/model/ModifyMntMbrBindRelateAcctBankCodeRequest.cpp
  src/v20190820/model/RevokeMemberRechargeThirdPayResponse.cpp
  src/v20190820/model/BindRelateAccReUnionPayRequest.cpp
  src/v20190820/model/CreateCustAcctIdResponse.cpp
  src/v20190820/model/QueryBankTransactionDetailsRequest.cpp
  src/v20190820/model/RefundResponse.cpp
  src/v20190820/model/UnifiedOrderResponse.cpp
  src/v20190820/model/DownloadBillRequest.cpp
  src/v20190820/model/QueryBankWithdrawCashDetailsRequest.cpp
  src/v20190820/model/RevRegisterBillSupportWithdrawRequest.cpp
  src/v20190820/model/QueryCustAcctIdBalanceResponse.cpp
  src/v20190820/model/QueryCustAcctIdBalanceRequest.cpp
  src/v20190820/model/DownloadBillResponse.cpp
  src/v20190820/model/RechargeMemberThirdPayResponse.cpp
  src/v20190820/model/BindAcctRequest.cpp
  src/v20190820/model/ReviseMbrPropertyRequest.cpp
  src/v20190820/model/WithdrawCashMembershipResponse.cpp
  src/v20190820/model/QueryBankWithdrawCashDetailsResponse.cpp
  src/v20190820/model/TransferItem.cpp
  src/v20190820/model/RegisterBillSupportWithdrawResponse.cpp
  src/v20190820/model/WithdrawCashMembershipRequest.cpp
  src/v20190820/model/QueryReconciliationDocumentRequest.cpp
  src/v20190820/model/UnbindRelateAcctResponse.cpp
  src/v20190820/model/BindRelateAcctUnionPayRequest.cpp
  src/v20190820/model/CheckAmountRequest.cpp
  src/v20190820/model/CreateAcctRequest.cpp
  src/v20190820/model/RechargeMemberThirdPayRequest.cpp
  src/v20190820/model/QueryMemberBindRequest.cpp
  src/v20190820/model/BindRelateAcctSmallAmountResponse.cpp
  src/v20190820/model/QueryMemberTransactionResponse.cpp
  src/v20190820/model/RegisterBillSupportWithdrawRequest.cpp
  src/v20190820/model/RefundOutSubOrderRefundList.cpp
  src/v20190820/model/UnbindRelateAcctRequest.cpp
  src/v20190820/model/ModifyMntMbrBindRelateAcctBankCodeResponse.cpp
  src/v20190820/model/QueryBalanceRequest.cpp
  src/v20190820/model/QuerySmallAmountTransferResponse.cpp
  src/v20190820/model/ApplyWithdrawalRequest.cpp
  src/v20190820/model/QueryRefundRequest.cpp
  src/v20190820/model/CreateCustAcctIdRequest.cpp
  src/v20190820/model/QueryBankClearResponse.cpp
  src/v20190820/model/BindRelateAcctSmallAmountRequest.cpp
  src/v20190820/model/QueryRefundResponse.cpp
  src/v20190820/model/UnBindAcctResponse.cpp
  src/v20190820/model/QuerySingleTransactionStatusResponse.cpp
  src/v20190820/model/QueryMemberBindResponse.cpp
  src/v20190820/model/QueryCommonTransferRechargeRequest.cpp
  src/v20190820/model/QueryItem.cpp
  src/v20190820/model/TranItem.cpp
  src/v20190820/model/ClearItem.cpp
  src/v20190820/model/BindRelateAcctUnionPayResponse.cpp
  src/v20190820/model/CloseOrderRequest.cpp
  src/v20190820/model/ApplyWithdrawalResponse.cpp
  src/v20190820/model/QueryBalanceResponse.cpp
  src/v20190820/model/QueryBankTransactionDetailsResponse.cpp
  src/v20190820/model/QueryOrderOutSubOrderList.cpp
  src/v20190820/model/ReviseMbrPropertyResponse.cpp
  src/v20190820/model/UnifiedOrderRequest.cpp
  src/v20190820/model/QueryCommonTransferRechargeResponse.cpp
  src/v20190820/model/RevokeMemberRechargeThirdPayRequest.cpp
  src/v20190820/model/QueryMemberTransactionRequest.cpp
  src/v20190820/model/TransactionItem.cpp
  src/v20190820/model/CheckAcctResponse.cpp
  src/v20190820/model/QueryReconciliationDocumentResponse.cpp
  src/v20190820/model/QueryOrderResponse.cpp
  src/v20190820/model/RefundRequest.cpp
  src/v20190820/model/BindRelateAccReUnionPayResponse.cpp
  src/v20190820/model/CloseOrderResponse.cpp
  src/v20190820/model/FileItem.cpp
  src/v20190820/model/WithdrawItem.cpp
  )

set(cpdp_include
    include/tencentcloud/cpdp
  )

add_library(cpdp ${LIB_TYPE}
  ${cpdp_public_header}
  ${cpdp_public_header_model}
  ${cpdp_src})

set_target_properties(cpdp
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cpdp
  )

target_include_directories(cpdp
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cpdp
  core)

#install(FILES ${cpdp_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cpdp/v20190820)
#install(FILES ${cpdp_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cpdp/v20190820/model)
install(DIRECTORY ${cpdp_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cpdp
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
