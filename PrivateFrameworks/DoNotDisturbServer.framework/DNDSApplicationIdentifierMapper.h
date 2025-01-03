/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSApplicationIdentifierMapper : NSObject <DNDSApplicationIdentifierMapping>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_iOSBundleIDForMacOSBundleID:(id)arg1;
- (id)_macOSBundleIDForiOSBundleID:(id)arg1;
- (id)applicationIdentifierForFileWithSourceApplicationIdentifier:(id)arg1;
- (id)applicationIdentifierForSyncWithSourceApplicationIdentifier:(id)arg1;
- (id)applicationIdentifierForTargetPlatform:(unsigned long long)arg1 withSourceApplicationIdentifier:(id)arg2;

@end
