/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSOffTheGridModeMetric : NSObject <CUTCoreAnalyticsMetric> {
    NSNumber * _currentMode;
    bool  _currentNetworkConnectionState;
    NSNumber * _currentPublishStatus;
    bool  _currentStewieConnectionState;
    NSNumber * _duration;
    NSNumber * _previousMode;
    bool  _previousNetworkConnectionState;
    NSNumber * _previousPublishStatus;
    bool  _previousStewieConnectionState;
}

@property (nonatomic, readonly) NSNumber *currentMode;
@property (nonatomic, readonly) bool currentNetworkConnectionState;
@property (nonatomic, readonly) NSNumber *currentPublishStatus;
@property (nonatomic, readonly) bool currentStewieConnectionState;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSNumber *duration;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *previousMode;
@property (nonatomic, readonly) bool previousNetworkConnectionState;
@property (nonatomic, readonly) NSNumber *previousPublishStatus;
@property (nonatomic, readonly) bool previousStewieConnectionState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)currentMode;
- (bool)currentNetworkConnectionState;
- (id)currentPublishStatus;
- (bool)currentStewieConnectionState;
- (id)dictionaryRepresentation;
- (id)duration;
- (id)initWithPreviousMode:(id)arg1 currentMode:(id)arg2 previousPublishStatus:(id)arg3 currentPublishStatus:(id)arg4 previousStewieConnectionState:(bool)arg5 currentStewieConnectionState:(bool)arg6 previousNetworkConnectionState:(bool)arg7 currentNetworkConnectionState:(bool)arg8 duration:(id)arg9;
- (id)name;
- (id)previousMode;
- (bool)previousNetworkConnectionState;
- (id)previousPublishStatus;
- (bool)previousStewieConnectionState;

@end