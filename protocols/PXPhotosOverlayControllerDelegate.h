/* Generated by RuntimeBrowser.
 */

@protocol PXPhotosOverlayControllerDelegate

@required

- (PXAssetReference *)dominantAssetReferenceForPhotosOverlayController:(id <PXPhotosOverlayController>)arg1;
- (void)photosOverlayController:(id <PXPhotosOverlayController>)arg1 didChangeCurrentLens:(id <PXPhotosLensControlItem>)arg2;
- (void)photosOverlayController:(id <PXPhotosOverlayController>)arg1 didNavigateToAssetReference:(PXAssetReference *)arg2;

@end
