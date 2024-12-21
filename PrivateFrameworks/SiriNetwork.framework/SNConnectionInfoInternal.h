/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriNetwork.framework/SiriNetwork
 */

@interface SNConnectionInfoInternal : NSObject {
    void connectionConfiguration;
    void policy;
    void policyRoute;
}

@property (nonatomic, copy) NSString *aceHost;
@property (nonatomic, copy) NSString *assistantIdentifier;
@property (nonatomic) long long communicationProtocolTechnology;
@property (nonatomic, copy) NSString *connectionId;
@property (nonatomic, retain) SAConnectionPolicy *connectionPolicy;
@property (nonatomic, retain) SAConnectionPolicyRoute *connectionPolicyRoute;
@property (nonatomic) long long connectionProtocolTechnology;
@property (nonatomic) bool deviceIsInWalkaboutExperimentGroup;
@property (nonatomic) bool forceOnDeviceOnlyDictation;
@property (nonatomic) bool forceReconnect;
@property (nonatomic) bool imposePolicyBan;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSString *peerAssistantIdentifier;
@property (nonatomic, copy) NSString *peerType;
@property (nonatomic, copy) NSString *peerVersion;
@property (nonatomic, retain) SAConnectionPolicy *policy;
@property (nonatomic, retain) SAConnectionPolicyRoute *policyRoute;
@property (nonatomic) bool prefersWWAN;
@property (nonatomic, copy) NSString *productTypePrefix;
@property (nonatomic) bool skipPeer;
@property (nonatomic, copy) NSError *skipPeerErrorReason;
@property (nonatomic) double timeout;
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
- (bool)forceOnDeviceOnlyDictation;
- (bool)forceReconnect;
- (bool)imposePolicyBan;
- (id)init;
- (id)languageCode;
- (id)peerAssistantIdentifier;
- (id)peerType;
- (id)peerVersion;
- (id)policy;
- (id)policyRoute;
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
- (void)setPolicy:(id)arg1;
- (void)setPolicyRoute:(id)arg1;
- (void)setPrefersWWAN:(bool)arg1;
- (void)setProductTypePrefix:(id)arg1;
- (void)setSkipPeer:(bool)arg1;
- (void)setSkipPeerErrorReason:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUseWiFiHint:(bool)arg1;
- (void)setUsesPeerManagedSync:(bool)arg1;
- (void)setUsesProxyConnection:(bool)arg1;
- (bool)skipPeer;
- (id)skipPeerErrorReason;
- (double)timeout;
- (bool)useWiFiHint;
- (bool)usesPeerManagedSync;
- (bool)usesProxyConnection;

@end