/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari
 */

@interface SFURLCompletionMatchBookmarkData : NSObject <WBSURLCompletionMatchData> {
    WebBookmark * _bookmark;
    NSString * _cloudTabDeviceName;
    bool  _onlyContainsCloudTab;
    bool  _shouldPreload;
}

@property (nonatomic, readonly) WebBookmark *bookmark;
@property (nonatomic, readonly, copy) NSString *cloudTabDeviceName; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool containsBookmark;
@property (nonatomic, readonly) bool containsReadingListItem; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool lastVisitWasFailure;
@property (nonatomic, readonly) double lastVisitedTimeInterval;
@property (nonatomic, readonly) bool onlyContainsCloudTab; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSString *originalURLString;
@property (nonatomic, readonly) bool shouldPreload;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long visitCount; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long visitCountScore; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool visitWasClientError;

- (void).cxx_destruct;
- (float)_topSitesScoreAtTime:(double)arg1;
- (id)_userVisibleURLString;
- (id)bookmark;
- (id)cloudTabDeviceName;
- (bool)containsBookmark;
- (bool)containsReadingListItem;
- (void)enumeratePageTitlesAndUserVisibleURLsUsingBlock:(id /* block */)arg1;
- (void)enumeratePageTitlesUsingBlock:(id /* block */)arg1;
- (void)enumerateUserVisibleURLsUsingBlock:(id /* block */)arg1;
- (id)initWithBookmark:(id)arg1;
- (id)initWithBookmark:(id)arg1 shouldPreload:(bool)arg2;
- (id)initWithCloudTab:(id)arg1 deviceName:(id)arg2;
- (bool)lastVisitWasFailure;
- (double)lastVisitedTimeInterval;
- (id)matchDataByMergingWithMatchData:(id)arg1;
- (bool)matchesAutocompleteTrigger:(id)arg1 isStrengthened:(bool)arg2;
- (bool)onlyContainsCloudTab;
- (id)originalURLString;
- (id)pageTitleAtIndex:(unsigned long long)arg1;
- (id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1;
- (bool)shouldPreload;
- (float)topSitesScoreForPageTitleAtTime:(double)arg1;
- (float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
- (id)userVisibleURLStringAtIndex:(unsigned long long)arg1;
- (id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1;
- (long long)visitCountScoreForPageTitleAtTime;
- (long long)visitCountScoreForURLStringAtIndex:(unsigned long long)arg1;
- (bool)visitWasClientError;

@end