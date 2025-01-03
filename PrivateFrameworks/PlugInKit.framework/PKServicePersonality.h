/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKServicePersonality : PKPlugInCore <PKCorePlugInProtocol, PKSubsystemServicePersonality> {
    NSXPCConnection * _connection;
    id  _embeddedPrincipal;
    id  _hostPrincipal;
    id  _plugInPrincipal;
    NSUserDefaults * _preferences;
    PKService * _service;
}

@property (copy) NSDictionary *_userInfo;
@property (readonly) NSDictionary *bundleInfoDictionary;
@property (retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (retain) id embeddedPrincipal;
@property (readonly) unsigned long long hash;
@property (retain) id hostPrincipal;
@property (readonly) NSString *identifier;
@property (readonly) NSDictionary *plugInDictionary;
@property (retain) id plugInPrincipal;
@property (retain) NSUserDefaults *preferences;
@property (nonatomic, readonly) PKService *service;
@property (readonly) Class superclass;
@property (readonly) NSURL *url;
@property (readonly) NSUUID *uuid;
@property (readonly) NSString *version;

- (void).cxx_destruct;
- (void)beginUsingPlugIn:(id)arg1 ready:(id /* block */)arg2;
- (double)cleanExitTimeout;
- (id)connection;
- (id)defaultPrincipalObject;
- (id)description;
- (id)embeddedPrincipal;
- (id)findProtocol:(id)arg1;
- (void)hostHasControl;
- (id)hostPrincipal;
- (id)initWithConnection:(id)arg1 service:(id)arg2;
- (id)plugInPrincipal;
- (id)preferences;
- (void)prefsObjectForKey:(id)arg1 inPlugIn:(id)arg2 result:(id /* block */)arg3;
- (void)prefsSetObject:(id)arg1 forKey:(id)arg2 inPlugIn:(id)arg3 result:(id /* block */)arg4;
- (void)prepareUsing:(id)arg1 reply:(id /* block */)arg2;
- (void)prepareUsingPlugIn:(id)arg1 hostProtocol:(id)arg2 reply:(id /* block */)arg3;
- (id)service;
- (void)setConnection:(id)arg1;
- (void)setEmbeddedPrincipal:(id)arg1;
- (void)setHostPrincipal:(id)arg1;
- (void)setPlugInPrincipal:(id)arg1;
- (void)setPreferences:(id)arg1;
- (id)setupWithIdentifier:(id)arg1 extensionPointPlatform:(unsigned int)arg2;
- (void)shutdownPlugIn;

@end
