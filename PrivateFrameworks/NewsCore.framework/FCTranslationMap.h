/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTranslationMap : NSObject <FCTranslationProvider> {
    NSDictionary * _favoriteTranslationMap;
    NSString * _resourceID;
    NSDictionary * _topicTranslationMap;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *favoriteTranslationMap;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *resourceID;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *topicTranslationMap;

- (void).cxx_destruct;
- (id)favoriteTranslationForTagID:(id)arg1;
- (id)favoriteTranslationMap;
- (id)initWithPBTranslationMap:(id)arg1 resourceID:(id)arg2;
- (id)resourceID;
- (void)setFavoriteTranslationMap:(id)arg1;
- (void)setResourceID:(id)arg1;
- (void)setTopicTranslationMap:(id)arg1;
- (id)topicTranslationForTagID:(id)arg1;
- (id)topicTranslationMap;

@end
