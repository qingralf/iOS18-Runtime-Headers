/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImageLoadingUtilities : NSObject

+ (void)_assetsdImageForAsset:(id)arg1 withFormat:(id)arg2 allowPlaceholder:(bool)arg3 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg4 networkAccessAllowed:(bool)arg5 trackCPLDownload:(bool)arg6 sync:(bool)arg7 isCanceledHandler:(id /* block */)arg8 completion:(id /* block */)arg9;
+ (void)_imageForAsset:(id)arg1 withFormat:(unsigned short)arg2 allowPlaceholder:(bool)arg3 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg4 networkAccessAllowed:(bool)arg5 networkAccessForced:(bool)arg6 trackCPLDownload:(bool)arg7 isCanceledHandler:(id /* block */)arg8 completion:(id /* block */)arg9 sync:(bool)arg10;
+ (bool)canAccessImageForAsset:(id)arg1;
+ (id)newSynchronousImageForAsset:(id)arg1 withFormat:(unsigned short)arg2 allowPlaceholder:(bool)arg3 outImageProperties:(const struct __CFDictionary {}**)arg4 outDeliveredPlaceholder:(bool*)arg5;
+ (id)synchronousImageForAsset:(id)arg1 withFormat:(unsigned short)arg2 allowPlaceholder:(bool)arg3 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg4 networkAccessAllowed:(bool)arg5 networkAccessForced:(bool)arg6 trackCPLDownload:(bool)arg7 outImageProperties:(const struct __CFDictionary {}**)arg8 outImageDataInfo:(id*)arg9 outCPLDownloadContext:(id*)arg10;

@end
