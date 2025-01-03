/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesAnalytics.framework/NotesAnalytics
 */

@interface ICASActivityStreamDurationSummaryData : NSObject <AADataEventType> {
    NSNumber * _fullHeightViewDuration;
    NSNumber * _halfHeightViewDuration;
    NSNumber * _minimizedViewDuration;
    NSNumber * _sideBarViewDuration;
}

@property (nonatomic, readonly) NSNumber *fullHeightViewDuration;
@property (nonatomic, readonly) NSNumber *halfHeightViewDuration;
@property (nonatomic, readonly) NSNumber *minimizedViewDuration;
@property (nonatomic, readonly) NSNumber *sideBarViewDuration;

+ (id)dataName;
+ (bool)requiresDiagnosticsConsent;

- (void).cxx_destruct;
- (id)fullHeightViewDuration;
- (id)halfHeightViewDuration;
- (id)initWithHalfHeightViewDuration:(id)arg1 fullHeightViewDuration:(id)arg2 sideBarViewDuration:(id)arg3 minimizedViewDuration:(id)arg4;
- (id)minimizedViewDuration;
- (id)sideBarViewDuration;
- (id)toDict;

@end
