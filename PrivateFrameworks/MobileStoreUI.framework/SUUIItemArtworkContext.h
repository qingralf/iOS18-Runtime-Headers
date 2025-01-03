/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIItemArtworkContext : NSObject {
    UIColor * _backgroundColor;
    SUUIColorScheme * _colorScheme;
    SUUIProductImageDataConsumer * _generalImageConsumer;
    SUUIStyledImageDataConsumer * _iconConsumer;
    SUUIProductImageDataConsumer * _letterboxConsumer;
    SUUIStyledImageDataConsumer * _messagesIconConsumer;
    SUUIStyledImageDataConsumer * _newsstandConsumer;
    NSMutableDictionary * _placeholders;
    SUUIProductImageDataConsumer * _posterConsumer;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) SUUIColorScheme *colorScheme;
@property (nonatomic, retain) SUUIProductImageDataConsumer *generalConsumer;
@property (nonatomic, retain) SUUIStyledImageDataConsumer *iconConsumer;
@property (nonatomic, retain) SUUIProductImageDataConsumer *letterboxConsumer;
@property (nonatomic, retain) SUUIStyledImageDataConsumer *messagesIconConsumer;
@property (nonatomic, retain) SUUIStyledImageDataConsumer *newsstandConsumer;
@property (nonatomic, retain) SUUIProductImageDataConsumer *posterConsumer;

+ (id)lockupContextWithSize:(long long)arg1;
+ (id)roomContext;
+ (id)wishlistContext;

- (void).cxx_destruct;
- (id)URLForItem:(id)arg1;
- (id)artworkForItem:(id)arg1;
- (id)backgroundColor;
- (id)colorScheme;
- (id)dataConsumerForItem:(id)arg1;
- (id)generalConsumer;
- (id)iconConsumer;
- (struct CGSize { double x1; double x2; })imageSizeForItem:(id)arg1;
- (struct CGSize { double x1; double x2; })largestImageSizeForItems:(id)arg1;
- (struct CGSize { double x1; double x2; })largestImageSizeForLockups:(id)arg1;
- (id)letterboxConsumer;
- (id)messagesIconConsumer;
- (id)newsstandConsumer;
- (id)placeholderImageForItem:(id)arg1;
- (id)posterConsumer;
- (void)setBackgroundColor:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setGeneralConsumer:(id)arg1;
- (void)setIconConsumer:(id)arg1;
- (void)setLetterboxConsumer:(id)arg1;
- (void)setMessagesIconConsumer:(id)arg1;
- (void)setNewsstandConsumer:(id)arg1;
- (void)setPosterConsumer:(id)arg1;

@end
