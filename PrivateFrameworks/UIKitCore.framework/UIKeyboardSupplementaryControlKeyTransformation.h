/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardSupplementaryControlKeyTransformation : NSObject <UIKeyboardKeyplaneTransformation>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_cachedUndoOrRedoKeyForKeyplane:(id)arg1;
+ (double)_derivedFiveRowControlKeyWidthForRow:(unsigned long long)arg1 keysForRow:(id)arg2 context:(id)arg3;
+ (double)_derivedLeadingControlKeyWidthForRow:(unsigned long long)arg1 keysForRow:(id)arg2 context:(id)arg3;
+ (double)_derivedTrailingControlKeyWidthForRow:(unsigned long long)arg1 orientation:(long long)arg2;
+ (double)_keyPitchForKeyplane:(id)arg1;
+ (double)_keyplanePaddingForOrientation:(long long)arg1;
+ (double)_keyplanePaddingForOrientation:(long long)arg1 row:(unsigned long long)arg2;
+ (unsigned long long)_numberOfKeysInRow:(id)arg1 firstKey:(id*)arg2 lastKey:(id*)arg3;
+ (double)_scaledDerivedLeadingControlKeyWidth:(double)arg1 forKeysForRow:(id)arg2 keyCount:(long long)arg3 numberOfKeysInSpecification:(long long)arg4 context:(id)arg5;
+ (id)_supplementaryControlKeySetForOrientation:(long long)arg1 context:(id)arg2;
+ (id)_supplementaryControlKeyWithName:(id)arg1 context:(id)arg2;
+ (id)_supplementaryScriptSwitchKeyWithContext:(id)arg1;
+ (id)_supplementaryShiftKeysWithContext:(id)arg1;
+ (double)_totalKeyPaddingForOrientation:(long long)arg1;
+ (void)adjustHorizontalPaddingForKeyplane:(id)arg1 withTransformationContext:(id)arg2;
+ (id)cachedControlKeySetsForTransformationContext:(id)arg1;
+ (struct CGSize { double x1; double x2; })layoutScaleFactorForContext:(id)arg1;
+ (id)transformKeyplane:(id)arg1 withTransformationContext:(id)arg2;
+ (void)transformKeysForFiveRowKeyplane:(id)arg1 withTransformationContext:(id)arg2;
+ (void)transformKeysForFourRowKeyplane:(id)arg1 withTransformationContext:(id)arg2;
+ (void)transformKeysForHandwritingKeyplane:(id)arg1 withTransformationContext:(id)arg2;
+ (void)transformKeysForVietnameseKeyPlane:(id)arg1 withTransformationContext:(id)arg2;
+ (void)transformLastRowKeysForKeyplane:(id)arg1 row:(unsigned long long)arg2 withTransformationContext:(id)arg3;
+ (id)transformationIdentifier;

@end
