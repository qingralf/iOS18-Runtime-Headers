/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreCECBusProvider : CoreCECBus <CECBusPollingOperationDelegate, CECInterfaceDelegate> {
    bool  _deferLossOfLink;
    CECInterface * _interface;
    CECBusPollingOperation * _pollingOperation;
    bool  _realHasLink;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool deferLossOfLink;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) CECInterface *interface;
@property (nonatomic, retain) CECBusPollingOperation *pollingOperation;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)_cecErrorWithError:(id)arg1 fromInterface:(id)arg2;
- (void)_changeActiveSourceFrom:(id)arg1 to:(id)arg2;
- (bool)_sendMessage:(id)arg1 toDevice:(id)arg2 withRetryCount:(unsigned char)arg3 error:(id*)arg4;
- (id)addDeviceWithAttributes:(id)arg1 error:(id*)arg2;
- (id)addDeviceWithLogicalAddress:(unsigned char)arg1 message:(id)arg2 reason:(unsigned long long)arg3;
- (id)addDeviceWithLogicalAddress:(unsigned char)arg1 physicalAddress:(unsigned long long)arg2 attributes:(id)arg3 message:(id)arg4 reason:(unsigned long long)arg5;
- (unsigned char)allocateCECAddressForDeviceType:(unsigned long long)arg1 withCECAddress:(unsigned char)arg2 error:(id*)arg3;
- (unsigned char)arcTxAddressForArcRxDevice:(id)arg1;
- (bool)areMultipleCECBusses;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)deferLossOfLink;
- (id)description;
- (id)destinationConfirmedForMessage:(id)arg1;
- (id)destinationExpectedForMessage:(id)arg1;
- (void)didChangeLinkState:(bool)arg1 physicalAddress:(unsigned long long)arg2;
- (id)initWithBus:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterface:(id)arg1;
- (id)initWithLinkState:(bool)arg1 physicalAddress:(unsigned long long)arg2;
- (id)interface;
- (void)interface:(id)arg1 hibernationChanged:(bool)arg2;
- (void)interface:(id)arg1 receivedFrame:(struct CECFrame { unsigned char x1[16]; unsigned int x2 : 5; unsigned int x3 : 3; })arg2;
- (void)interfacePropertiesChanged:(id)arg1;
- (void)makeDeviceInactiveSource:(id)arg1;
- (id)pollingOperation;
- (void)pollingOperation:(id)arg1 deviceNotRespondingAtAddress:(unsigned char)arg2;
- (void)pollingOperation:(id)arg1 encounteredError:(id)arg2 forMessage:(id)arg3;
- (bool)pollingOperation:(id)arg1 shouldSkipAddress:(unsigned char)arg2;
- (void)pollingOperationCompleted:(id)arg1;
- (id)propertyForKey:(id)arg1 error:(id*)arg2;
- (void)reallocateAllCECAddresses:(id)arg1;
- (bool)receivedMessage:(id)arg1;
- (bool)refreshDevicesWithInitiator:(id)arg1 error:(id*)arg2;
- (bool)sendMessage:(id)arg1 error:(id*)arg2;
- (bool)sendMessage:(id)arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3;
- (void)setActiveSource:(id)arg1;
- (void)setLinkState:(bool)arg1 physicalAddress:(unsigned long long)arg2;
- (void)setOsdNameASCII:(struct CECOSDName { unsigned char x1; unsigned char x2[14]; })arg1;
- (void)setPollingOperation:(id)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setStreamPath:(unsigned long long)arg1;
- (void)setSystemAudioModeStatus:(unsigned long long)arg1;
- (void)setTvLanguageCodeASCII:(struct CECLanguage { unsigned char x1[3]; })arg1;
- (void)updateAllowHibernation;
- (void)willRemoveDevice:(id)arg1;

@end