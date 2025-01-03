/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari
 */

@interface SFURLCompletionMatchBookmarkListData : NSObject <WBSURLCompletionMatchData> {
    NSMutableArray * _bookmarks;
    NSString * _cloudTabDeviceName;
    bool  _containsBookmark;
    bool  _containsReadingListItem;
    <WBSURLCompletionMatchData> * _historyMatchData;
    bool  _onlyContainsCloudTab;
}

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
- (id)_bookmarkUserVisibleURLString;
- (id)_historyItemUserVisibleURLString;
- (id)bookmark;
- (id)cloudTabDeviceName;
- (bool)containsBookmark;
- (bool)containsReadingListItem;
- (void)enumeratePageTitlesAndUserVisibleURLsUsingBlock:(id /* block */)arg1;
- (void)enumeratePageTitlesUsingBlock:(id /* block */)arg1;
- (void)enumerateUserVisibleURLsUsingBlock:(id /* block */)arg1;
- (id)initWithBookmarkData:(id)arg1 andBookmarkData:(id)arg2;
- (id)initWithBookmarkData:(id)arg1 historyMatchData:(id)arg2;
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
