/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPublisherSpecifiedArticle : NSObject <FCHeadlineMetadata> {
    NSString * _articleID;
    NSString * _title;
}

@property (nonatomic, copy) NSString *articleID;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *displayDate;
@property (nonatomic, readonly) FCHeadlineThumbnailMetadata *formatThumbnail; /* unknown property attribute: ? */
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *routeURL; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSString *shortExcerpt; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSString *storyType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)articleID;
- (id)displayDate;
- (id)initWithDictionary:(id)arg1;
- (void)setArticleID:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)storyType;
- (id)title;

@end
