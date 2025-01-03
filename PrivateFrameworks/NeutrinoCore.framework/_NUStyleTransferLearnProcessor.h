/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface _NUStyleTransferLearnProcessor : CIImageProcessorKernel

+ (bool)allowPartialOutputRegion;
+ (int)formatForInputAtIndex:(int)arg1;
+ (id)learnStyleFromInputThumbnail:(id)arg1 targetThumbnail:(id)arg2 colorSpace:(id)arg3 configuration:(id)arg4 tuningParameters:(id)arg5 error:(out id*)arg6;
+ (int)outputFormatWithArguments:(id)arg1;
+ (bool)outputIsOpaque;
+ (bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (id)roiTileArrayForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (bool)synchronizeInputs;

@end
