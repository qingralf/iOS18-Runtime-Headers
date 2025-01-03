/* Generated by RuntimeBrowser.
 */

@protocol GPImageEditionViewControllerProtocol

@required

+ (bool)isAvailable;

- (<GPImageEditionViewControllerDelegate> *)delegate;
- (NSArray *)generatedAssets;
- (id)init;
- (id)initWithCoder:(NSCoder *)arg1;
- (id)initWithNibName:(NSString *)arg1 bundle:(NSBundle *)arg2;
- (id)initWithStyle:(long long)arg1;
- (bool)isLoadingRecipe;
- (NSString *)localizedCreateButtonTitle;
- (GPRecipe *)recipe;
- (void)setDelegate:(id <GPImageEditionViewControllerDelegate>)arg1;
- (void)setGeneratedAssets:(NSArray *)arg1;
- (void)setIsLoadingRecipe:(bool)arg1;
- (void)setRecipe:(GPRecipe *)arg1;
- (void)setSourceImage:(UIImage *)arg1;
- (void)setSourceImageIsSketch:(bool)arg1;
- (UIImage *)sourceImage;
- (bool)sourceImageIsSketch;
- (long long)style;

@end
