/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PairedDeviceRegistry.framework/PairedDeviceRegistry
 */

@interface PairedDeviceRegistry.RegistryCrux : _TtCs12_SwiftObject <NRPairedDeviceRegistryXPCFrameworkDelegate> {
    void $__lazy_storage_$_hasInternalDiagnostics;
    void $__lazy_storage_$_maxElapsedToFireMs;
    void $__lazy_storage_$_minElapsedToFireMs;
    void $__lazy_storage_$_tailspinsEnabled;
    void connectionShadow_;
    void connectionSleeper_;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastLoggedInfo;
    void notifyState;
    void refreshQueue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  refreshTimings;
    void registries_;
    void registryState_;
    void serviceShadow_;
    void unfairLock;
    void warnedAboutEntitlement_;
}

- (void)xpcDeviceID:(id)arg1 needsPasscode:(id)arg2;
- (void)xpcHasNewOOBKey:(id)arg1;

@end