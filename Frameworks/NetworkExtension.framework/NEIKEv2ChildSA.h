/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2ChildSA : NSObject {
    NEIKEv2NotifyPayload * _additionalKENotify;
    unsigned int  _childID;
    NEIKEv2ChildSAProposal * _chosenProposal;
    NEIKEv2ChildSAConfiguration * _configuration;
    NEIKEv2KeyExchangeHandler * _currentKEHandler;
    NSError * _error;
    NSMutableArray * _followupSharedSecrets;
    NEIKEv2IKESA * _ikeSA;
    unsigned short  _incomingDatabaseReqID;
    NSData * _incomingEncryptionKey;
    NSData * _incomingIntegrityKey;
    NSArray * _internalProposalsWithoutKEM;
    bool  _isInitiator;
    NSData * _localNonce;
    NSArray * _localTrafficSelectors;
    unsigned short  _outgoingDatabaseReqID;
    NSData * _outgoingEncryptionKey;
    NSData * _outgoingIntegrityKey;
    NSData * _primarySharedSecret;
    NSArray * _rekeyRequestProposals;
    NEIKEv2ChildSAProposal * _rekeyResponseProposal;
    NEIKEv2ESPSPI * _rekeyedRemoteSPI;
    NEIKEv2ESPSPI * _rekeyedSPI;
    NSData * _remoteKeyExchangeData;
    NSData * _remoteNonce;
    NEIKEv2KEMProtocol * _remotePreferredKEMProtocol;
    NSArray * _remoteTrafficSelectors;
    bool  _sequencePerTrafficClassSupported;
    bool  _shouldSendStateUpdate;
    unsigned long long  _state;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;

@end
