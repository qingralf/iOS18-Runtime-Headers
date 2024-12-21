/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

@interface TRIExperimentRollbackPushNotification : TRIPBMessage

@property (nonatomic, retain) TRIPBUInt32Array *deploymentIdArray;
@property (nonatomic, readonly) unsigned long long deploymentIdArray_Count;
@property (nonatomic, copy) NSString *experimentId;
@property (nonatomic) bool hasExperimentId;

+ (id)descriptor;

@end