/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHPhotoLibraryFeatureAvailabilityReporter : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock_tasks;
    PHPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _tasks;
}

- (void).cxx_destruct;
- (void)availabilityForFeature:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)availabilityStatusForFeature:(unsigned long long)arg1 availabilityConfig:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)availabilityStatusForFeature:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithPhotoLibrary:(id)arg1;

@end