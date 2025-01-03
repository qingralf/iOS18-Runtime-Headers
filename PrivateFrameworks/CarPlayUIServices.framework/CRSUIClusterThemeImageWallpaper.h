/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
 */

@interface CRSUIClusterThemeImageWallpaper : NSObject <BSXPCSecureCoding> {
    CRSUIClusterThemeImageAsset * _darkModeAsset;
    CRSUIClusterThemeImageAsset * _lightModeAsset;
    bool  _supportsDynamicAppearance;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsDynamicAppearance;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)assetForInterfaceStyle:(long long)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithLightModeAsset:(id)arg1 darkModeAsset:(id)arg2;
- (id)initWithLightModeAsset:(id)arg1 darkModeAsset:(id)arg2 supportsDynamicAppearance:(bool)arg3;
- (bool)supportsDynamicAppearance;

@end
