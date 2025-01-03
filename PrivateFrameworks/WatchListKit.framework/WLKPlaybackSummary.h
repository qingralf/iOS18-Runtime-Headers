/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKPlaybackSummary : NSObject <NSSecureCoding> {
    NSString * _accountID;
    NSString * _bundleID;
    NSString * _channelID;
    long long  _completionState;
    NSString * _contentID;
    NSDate * _currentPlaybackDate;
    NSNumber * _duration;
    NSNumber * _elapsedTime;
    NSString * _externalProfileID;
    NSNumber * _featureDuration;
    NSNumber * _featureElapsedTime;
    bool  _fromActivePlayerPath;
    bool  _isAlwaysLive;
    bool  _isTimerDerived;
    NSNumber * _playbackRate;
    long long  _playbackState;
    long long  _playbackType;
    NSString * _serviceID;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) NSNumber *accountIDAsNumber;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *channelID;
@property (nonatomic, readonly) long long completionState;
@property (nonatomic, readonly) NSString *contentID;
@property (nonatomic, readonly) NSDate *currentPlaybackDate;
@property (nonatomic, readonly) NSNumber *duration;
@property (nonatomic, readonly) NSNumber *elapsedTime;
@property (nonatomic, readonly) NSString *externalProfileID;
@property (nonatomic, readonly) NSNumber *featureDuration;
@property (nonatomic, readonly) NSNumber *featureElapsedTime;
@property (getter=isFromActivePlayerPath, nonatomic) bool fromActivePlayerPath;
@property (nonatomic) bool isAlwaysLive;
@property (nonatomic) bool isTimerDerived;
@property (nonatomic, readonly) NSNumber *playbackRate;
@property (nonatomic, readonly) long long playbackState;
@property (nonatomic, readonly) long long playbackType;
@property (nonatomic, readonly) NSString *serviceID;
@property (nonatomic, readonly) NSDate *timestamp;

+ (id)EBSSummaryWithBundleID:(id)arg1 channelID:(id)arg2 externalId:(id)arg3 accountID:(id)arg4 externalProfileID:(id)arg5 timestamp:(id)arg6 playbackState:(long long)arg7 playbackRate:(id)arg8 currentPlaybackDate:(id)arg9;
+ (id)VODSummaryWithBundleID:(id)arg1 channelID:(id)arg2 contentID:(id)arg3 accountID:(id)arg4 externalProfileID:(id)arg5 timestamp:(id)arg6 duration:(id)arg7 elapsedTime:(id)arg8 featureDuration:(id)arg9 featureElapsedTime:(id)arg10 playbackState:(long long)arg11 playbackRate:(id)arg12 completionState:(long long)arg13;
+ (id)VODSummaryWithBundleID:(id)arg1 channelID:(id)arg2 contentID:(id)arg3 accountID:(id)arg4 externalProfileID:(id)arg5 timestamp:(id)arg6 duration:(id)arg7 elapsedTime:(id)arg8 playbackState:(long long)arg9 playbackRate:(id)arg10 completionState:(long long)arg11;
+ (id)_debugStringForPlaybackType:(long long)arg1;
+ (long long)completionStateForDuration:(double)arg1 elapsedTime:(double)arg2;
+ (id)debugStringForCompletionState:(long long)arg1;
+ (id)debugStringForPlaybackState:(long long)arg1;
+ (id)liveSummaryWithBundleID:(id)arg1 channelID:(id)arg2 serviceID:(id)arg3 accountID:(id)arg4 externalProfileID:(id)arg5 timestamp:(id)arg6 playbackState:(long long)arg7 playbackRate:(id)arg8 currentPlaybackDate:(id)arg9;
+ (double)playedThresholdTimeForDuration:(double)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONRepresentation;
- (bool)_compareOptional:(id)arg1 with:(id)arg2;
- (bool)_compareOptionalTemporalValue:(id)arg1 with:(id)arg2 fuzzy:(bool)arg3;
- (bool)_isValid;
- (bool)_validate:(id)arg1 identifier:(id)arg2 expectedClass:(Class)arg3;
- (id)accountID;
- (id)accountIDAsNumber;
- (id)bundleID;
- (id)channelID;
- (long long)completionState;
- (id)contentID;
- (id)currentPlaybackDate;
- (id)description;
- (id)dictionaryRepresentation;
- (id)duration;
- (id)elapsedTime;
- (id)elapsedTimeSummaryWithPlaybackState:(long long)arg1 timerDerived:(bool)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)externalProfileID;
- (id)featureDuration;
- (id)featureElapsedTime;
- (unsigned long long)hash;
- (id)initWithBundleID:(id)arg1 timestamp:(id)arg2 duration:(id)arg3 elapsedTime:(id)arg4 featureDuration:(id)arg5 featureElapsedTime:(id)arg6 externalProfileID:(id)arg7 contentID:(id)arg8 accountID:(id)arg9 playbackState:(long long)arg10 playbackRate:(id)arg11 completionState:(long long)arg12 isAlwaysLive:(bool)arg13 serviceID:(id)arg14 currentPlaybackDate:(id)arg15 playbackType:(long long)arg16 isTimerDerived:(bool)arg17 isFromActivePlayerPath:(bool)arg18 channelID:(id)arg19;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaRemoteDictionary:(id)arg1 bundleID:(id)arg2 accountID:(id)arg3 isFromActivePlayerPath:(bool)arg4;
- (bool)isAlwaysLive;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSummary:(id)arg1;
- (bool)isEquivalentToSummaryExcludingCursor:(id)arg1;
- (bool)isEquivalentToSummaryExcludingTimestamp:(id)arg1;
- (bool)isFromActivePlayerPath;
- (bool)isLiveType;
- (bool)isSameContent:(id)arg1;
- (bool)isTimerDerived;
- (id)playbackRate;
- (long long)playbackState;
- (long long)playbackType;
- (void)resolveChannelID:(id /* block */)arg1;
- (id)sanitizedCopy;
- (id)serviceID;
- (void)setFromActivePlayerPath:(bool)arg1;
- (void)setIsAlwaysLive:(bool)arg1;
- (void)setIsTimerDerived:(bool)arg1;
- (id)shortDescription;
- (id)timestamp;

@end
