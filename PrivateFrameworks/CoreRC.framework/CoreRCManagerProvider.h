/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreRCManagerProvider : CoreRCManager <CoreRCInterfaceControllerDelegate> {
    CoreRCInterfaceController * _interfaceController;
    NSArray * _pluginOverrides;
    CoreCECOverride * _standardOverride;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CoreRCInterfaceController *interfaceController;
@property (nonatomic, retain) NSArray *pluginOverrides;
@property (nonatomic, retain) CoreCECOverride *standardOverride;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)addDeviceWithBus:(id)arg1 logicalAddress:(unsigned char)arg2 physicalAddress:(unsigned long long)arg3 attributes:(id)arg4 message:(id)arg5 reason:(unsigned long long)arg6;
- (id)addDeviceWithBus:(id)arg1 transportProperties:(id)arg2 error:(id*)arg3;
- (id)createRCOverrideFromPaths:(id)arg1;
- (void)dealloc;
- (id)extendedPropertyForKey:(id)arg1 ofDevice:(id)arg2 error:(id*)arg3;
- (void)initCECOverrides;
- (void)initOverrides;
- (id)initWithSerialQueue:(id)arg1;
- (id)initWithSerialQueue:(id)arg1 withoutPlugins:(bool)arg2;
- (id)interfaceController;
- (void)interfaceController:(id)arg1 didAddInterface:(id)arg2;
- (void)interfaceController:(id)arg1 didRemoveInterface:(id)arg2;
- (id)pluginOverrides;
- (id)propertyForKey:(id)arg1 ofBus:(id)arg2 error:(id*)arg3;
- (bool)setExtendedProperty:(id)arg1 forKey:(id)arg2 ofDevice:(id)arg3 error:(id*)arg4;
- (void)setPluginOverrides:(id)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2 ofBus:(id)arg3 error:(id*)arg4;
- (void)setStandardOverride:(id)arg1;
- (id)standardOverride;

@end
