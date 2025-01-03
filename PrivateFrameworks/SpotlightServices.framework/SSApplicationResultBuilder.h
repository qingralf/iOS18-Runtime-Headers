/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface SSApplicationResultBuilder : SSResultBuilder {
    NSArray * _alternateNames;
    NSURL * _appURL;
    NSString * _bundleId;
    SFRichText * _highlightedAlternateName;
    NSString * _matchedAlternateName;
    NSString * _name;
}

@property (nonatomic, retain) NSArray *alternateNames;
@property (nonatomic, retain) NSURL *appURL;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, retain) SFRichText *highlightedAlternateName;
@property (nonatomic, retain) NSString *matchedAlternateName;
@property (nonatomic, retain) NSString *name;

+ (id)bundleId;
+ (id)formattedAlternateNamesForBundleId:(id)arg1 withAlternateNames:(id)arg2;

- (void).cxx_destruct;
- (id)alternateNames;
- (id)appURL;
- (id)buildBadgingImageWithThumbnail:(id)arg1;
- (id)buildFootnote;
- (id)buildResult;
- (id)buildThumbnail;
- (id)buildTitle;
- (id)bundleId;
- (id)highlightedAlternateName;
- (id)initWithResult:(id)arg1;
- (id)matchedAlternateName;
- (id)name;
- (void)setAlternateNames:(id)arg1;
- (void)setAppURL:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setHighlightedAlternateName:(id)arg1;
- (void)setMatchedAlternateName:(id)arg1;
- (void)setName:(id)arg1;

@end
