/* Generated by RuntimeBrowser
   Image: /usr/lib/libnetquality.dylib
 */

@interface NetworkQualityServerConfiguration : NSObject {
    bool  _bonjourEnabled;
    unsigned int  _httpProtocol;
    unsigned int  _idleTimeoutSeconds;
    bool  _l4sEnabled;
    int  _listenPort;
    bool  _mirrorServerIP;
    unsigned long long  _networkServiceType;
    bool  _tlsEnabled;
}

@property (nonatomic) bool bonjourEnabled;
@property (nonatomic) unsigned int httpProtocol;
@property (nonatomic) unsigned int idleTimeoutSeconds;
@property (nonatomic) bool l4sEnabled;
@property (nonatomic) int listenPort;
@property (nonatomic) bool mirrorServerIP;
@property unsigned long long networkServiceType;
@property (nonatomic) bool tlsEnabled;

+ (unsigned int)defaultIdleTimeout;

- (bool)bonjourEnabled;
- (unsigned int)httpProtocol;
- (unsigned int)idleTimeoutSeconds;
- (id)init;
- (bool)l4sEnabled;
- (int)listenPort;
- (bool)mirrorServerIP;
- (unsigned long long)networkServiceType;
- (void)setBonjourEnabled:(bool)arg1;
- (void)setHttpProtocol:(unsigned int)arg1;
- (void)setIdleTimeoutSeconds:(unsigned int)arg1;
- (void)setL4sEnabled:(bool)arg1;
- (void)setListenPort:(int)arg1;
- (void)setMirrorServerIP:(bool)arg1;
- (void)setNetworkServiceType:(unsigned long long)arg1;
- (void)setTlsEnabled:(bool)arg1;
- (bool)tlsEnabled;

@end
