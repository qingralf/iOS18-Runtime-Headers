/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSDeviceSettings : IKJSObject <IKJSDeviceSettings, NSObject, _IKJSDeviceSettings, _IKJSDeviceSettingsProxy> {
    <IKAppDeviceConfig> * _deviceConfig;
    id  _restrictionDidChangeToken;
}

@property (nonatomic, readonly) IKJSRestrictions *Restrictions;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } Screen;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) <IKAppDeviceConfig> *deviceConfig;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) NSString *language;
@property (nonatomic, readonly, retain) NSString *name;
@property (nonatomic, readonly, retain) NSString *preferredVideoFormat;
@property (nonatomic, readonly, retain) NSString *preferredVideoPreviewFormat;
@property (nonatomic, readonly) IKJSRestrictions *restrictions;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } screen;
@property (nonatomic, readonly, retain) NSString *storefrontCountryCode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)Restrictions;
- (struct CGSize { double x1; double x2; })Screen;
- (id)_formatStringForVideoFormat:(unsigned long long)arg1;
- (void)_restrictionsDidChangeNotification:(id)arg1;
- (id)asPrivateIKJSDeviceSettings;
- (void)dealloc;
- (id)deviceConfig;
- (id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2;
- (id)language;
- (id)name;
- (id)preferredVideoFormat;
- (id)preferredVideoPreviewFormat;
- (id)restrictions;
- (struct CGSize { double x1; double x2; })screen;
- (void)setDeviceConfig:(id)arg1;
- (id)storefrontCountryCode;

@end
