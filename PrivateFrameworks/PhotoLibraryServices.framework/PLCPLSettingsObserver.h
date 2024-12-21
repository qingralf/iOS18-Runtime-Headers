/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCPLSettingsObserver : NSObject {
    <PLCPLSettingsObserverDelegate> * _delegate;
    PLLazyObject * _lazySettings;
    PLPhotoLibraryBundle * _libraryBundle;
}

@property <PLCPLSettingsObserverDelegate> *delegate;
@property (readonly) PLCPLSettings *settings;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithLibraryBundle:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (bool)isCloudPhotoLibraryEnabled;
- (void)setDelegate:(id)arg1;
- (bool)setPrefetchMode:(long long)arg1 error:(id*)arg2;
- (id)settings;

@end