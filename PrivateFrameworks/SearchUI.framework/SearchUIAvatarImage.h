/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIAvatarImage : SearchUIImage {
    NSArray * _contactIdentifiers;
    NSString * _letters;
    <CNCancelable> * _renderingToken;
    bool  _requiresImageDataToLoad;
}

@property (nonatomic, copy) NSArray *contactIdentifiers;
@property (nonatomic, retain) NSString *letters;
@property (retain) <CNCancelable> *renderingToken;
@property (nonatomic) bool requiresImageDataToLoad;

+ (id)avatarImageRenderer;

- (void).cxx_destruct;
- (id)contactIdentifiers;
- (int)defaultCornerRoundingStyle;
- (id)initWithContactImage:(id)arg1;
- (id)initWithMonogramImage:(id)arg1;
- (id)letters;
- (void)loadImageWithScale:(double)arg1 isDarkStyle:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)renderingToken;
- (bool)requiresImageDataToLoad;
- (void)setContactIdentifiers:(id)arg1;
- (void)setDefaultSizeIfNecessary;
- (void)setLetters:(id)arg1;
- (void)setRenderingToken:(id)arg1;
- (void)setRequiresImageDataToLoad:(bool)arg1;

@end