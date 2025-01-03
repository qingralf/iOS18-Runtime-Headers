/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXUserFocusComputedActivityBiomeStream : NSObject <ATXUnifiedInferredActivityBiomeStreamProtocol> {
    BMStream * _computedModeStream;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_transitionPublisherFromComputedModeStreamPublisher:(id)arg1;
- (id)init;
- (id)initFromUserFocusComputedModeStream:(id)arg1;
- (id)sessionPublisherFromStartTime:(double)arg1;
- (id)transitionPublisherFromStartTime:(double)arg1;
- (id)transitionPublisherFromStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 lastN:(id)arg4 reversed:(bool)arg5;

@end
