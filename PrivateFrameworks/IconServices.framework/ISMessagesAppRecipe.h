/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

@interface ISMessagesAppRecipe : NSObject <ISCompositorRecipe, ISRecipeOptionalBorder, ISRecipeOptionalMask, ISSuppliesIconSpecification> {
    bool  shouldApplyMask;
    bool  shouldDrawBorder;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) IFIconSpecification *iconSpecification;
@property bool shouldApplyMask;
@property bool shouldDrawBorder;
@property (readonly) Class superclass;

- (id)iconSpecification;
- (id)init;
- (id)layerTreeForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (void)setShouldApplyMask:(bool)arg1;
- (void)setShouldDrawBorder:(bool)arg1;
- (bool)shouldApplyMask;
- (bool)shouldDrawBorder;

@end
