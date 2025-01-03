/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
 */

@interface CRSUISystemWallpaperProvider : NSObject <CRSUIWallpaperDataProviding> {
    <CRSUIWallpaperDataProvidingDelegate> * dataProviderDelegate;
}

@property (nonatomic) <CRSUIWallpaperDataProvidingDelegate> *dataProviderDelegate;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataProviderDelegate;
- (id)defaultWallpapers;
- (id)displayID;
- (id)dynamicAppearanceWallpapersForVehicle:(id)arg1;
- (void)invalidate;
- (bool)isReady;
- (id)loadWallpaperFromData:(id)arg1;
- (id)resolveWallpaper:(id)arg1;
- (void)setDataProviderDelegate:(id)arg1;
- (unsigned long long)version;
- (id)wallpapers;

@end
