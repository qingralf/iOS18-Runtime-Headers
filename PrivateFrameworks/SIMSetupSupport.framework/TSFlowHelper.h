/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

@interface TSFlowHelper : NSObject

+ (long long)_slotForPlanItem:(id)arg1;
+ (id)getAccountMemberTransferablePlanWithSameCarrierName:(id)arg1 transferablePlans:(id)arg2;
+ (bool)handleStartOverAgainstNoPlan:(id)arg1 navigationController:(id)arg2 completion:(id /* block */)arg3;
+ (bool)hasTransferablePlanWithSameCarrierName:(id)arg1 transferablePlans:(id)arg2 inBuddy:(bool)arg3 matchingSODACarrierWebsheetTransferPlanIndex:(id)arg4;
+ (void)registerIMessageWithPlanItems:(id)arg1;
+ (id)sortIndexesInDescending:(id)arg1;
+ (id)unregisteredSelectedPlanItems:(id)arg1;

@end