/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDeliveryReceiptProcessingPipelineComponent : IMPipelineComponent {
    IMDMessageStore * _messageStore;
}

- (void).cxx_destruct;
- (void)_metricMessageGUIDDelivered:(id)arg1 sendDate:(id)arg2 deliveryDate:(id)arg3;
- (void)_metricMessageGUIDSendToDelivered:(id)arg1;
- (id)_processDeliveryReceiptForMessage:(id)arg1 date:(id)arg2 isFromOffGridCapableDevice:(bool)arg3 chat:(id)arg4;
- (void)_reduceExpectedSatelliteDeliveriesOnMessage:(id)arg1 chat:(id)arg2;
- (id)initWithMessageStore:(id)arg1;
- (id)runIndividuallyWithInput:(id)arg1;

@end
