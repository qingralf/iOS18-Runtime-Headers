/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
 */

@interface _TtC8NewsFeedP33_956832B3628B6135B83D78176B8866FE30FormatArticleOverridesMetadata : NSObject <FCHeadlineMetadata> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  displayDate;
    void formatThumbnail;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  routeURL;
    void shortExcerpt;
    void storyType;
    void title;
}

@property (nonatomic, readonly) NSDate *displayDate;
@property (nonatomic, readonly) FCHeadlineThumbnailMetadata *formatThumbnail;
@property (nonatomic, readonly) NSURL *routeURL;
@property (nonatomic, readonly) NSString *shortExcerpt;
@property (nonatomic, readonly) NSString *storyType;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)displayDate;
- (id)formatThumbnail;
- (id)init;
- (id)routeURL;
- (id)shortExcerpt;
- (id)storyType;
- (id)title;

@end
