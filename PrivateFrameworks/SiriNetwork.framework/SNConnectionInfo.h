/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriNetwork.framework/SiriNetwork
 */

@interface SNConnectionInfo : NSObject {
    SNConnectionInfoInternal * _underlyingConnectionInfo;
}

@property (nonatomic, copy) NSString *aceHost;
@property (nonatomic, copy) NSString *assistantIdentifier;
@property (nonatomic) long long communicationProtocolTechnology;
@property (nonatomic, copy) NSString *connectionId;
@property (nonatomic, copy) SAConnectionPolicy *connectionPolicy;
@property (nonatomic, copy) SAConnectionPolicyRoute *connectionPolicyRoute;
@property (nonatomic) long long connectionProtocolTechnology;
@property (nonatomic) bool deviceIsInWalkaboutExperimentGroup;
@property (getter=isForceOnDeviceOnlyDictationEnabled, nonatomic) bool forceOnDeviceOnlyDictation;
@property (nonatomic) bool forceReconnect;
@property (nonatomic) bool imposePolicyBan;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSString *peerAssistantIdentifier;
@property (nonatomic, copy) NSString *peerType;
@property (nonatomic, copy) NSString *peerVersion;
@property (nonatomic) bool prefersWWAN;
@property (nonatomic, copy) NSString *productTypePrefix;
@property (nonatomic) bool skipPeer;
@property (nonatomic, copy) NSError *skipPeerErrorReason;
@property (nonatomic) double timeout;
@property (nonatomic, retain) SNConnectionInfoInternal *underlyingConnectionInfo;
@property (nonatomic) bool useWiFiHint;
@property (nonatomic) bool usesPeerManagedSync;
@property (nonatomic) bool usesProxyConnection;

- (void).cxx_destruct;
- (id)aceHost;
- (id)assistantIdentifier;
- (long long)communicationProtocolTechnology;
- (id)connectionId;
- (id)connectionPolicy;
- (id)connectionPolicyRoute;
- (long long)connectionProtocolTechnology;
- (bool)deviceIsInWalkaboutExperimentGroup;
- (bool)forceReconnect;
- (bool)imposePolicyBan;
- (id)init;
- (bool)isForceOnDeviceOnlyDictationEnabled;
- (id)languageCode;
- (id)peerAssistantIdentifier;
- (id)peerType;
- (id)peerVersion;
- (bool)prefersWWAN;
- (id)productTypePrefix;
- (void)setAceHost:(id)arg1;
- (void)setAssistantIdentifier:(id)arg1;
- (void)setCommunicationProtocolTechnology:(long long)arg1;
- (void)setConnectionId:(id)arg1;
- (void)setConnectionPolicy:(id)arg1;
- (void)setConnectionPolicyRoute:(id)arg1;
- (void)setConnectionProtocolTechnology:(long long)arg1;
- (void)setDeviceIsInWalkaboutExperimentGroup:(bool)arg1;
- (void)setForceOnDeviceOnlyDictation:(bool)arg1;
- (void)setForceReconnect:(bool)arg1;
- (void)setImposePolicyBan:(bool)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setPeerAssistantIdentifier:(id)arg1;
- (void)setPeerType:(id)arg1;
- (void)setPeerVersion:(id)arg1;
- (void)setPrefersWWAN:(bool)arg1;
- (void)setProductTypePrefix:(id)arg1;
- (void)setSkipPeer:(bool)arg1;
- (void)setSkipPeerErrorReason:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUnderlyingConnectionInfo:(id)arg1;
- (void)setUseWiFiHint:(bool)arg1;
- (void)setUsesPeerManagedSync:(bool)arg1;
- (void)setUsesProxyConnection:(bool)arg1;
- (bool)skipPeer;
- (id)skipPeerErrorReason;
- (double)timeout;
- (id)underlyingConnectionInfo;
- (bool)useWiFiHint;
- (bool)usesPeerManagedSync;
- (bool)usesProxyConnection;

@end
