/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit
 */

@interface NTKCFacesBundleArrayGalleryCollection : NTKFacesArrayGalleryCollection <NTKFaceBundleObserver> {
    CLKDevice * _device;
    NTKFaceBundle * _faceBundle;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, readonly) NTKFaceBundle *faceBundle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)device;
- (id)faceBundle;
- (void)galleryFacesDidUpdate;
- (id)initWithDevice:(id)arg1 faceBundle:(id)arg2;
- (void)loadFaces;

@end