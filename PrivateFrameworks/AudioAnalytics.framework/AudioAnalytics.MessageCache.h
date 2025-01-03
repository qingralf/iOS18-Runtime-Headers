/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioAnalytics.framework/AudioAnalytics
 */

@interface AudioAnalytics.MessageCache : _TtCs12_SwiftObject <AudioAnalytics.ServerProtocol> {
    void caches;
}

- (void)createSessionWith:(long long)arg1;
- (void)destroySessionFor:(long long)arg1;
- (void)getServiceNameFor:(long long)arg1 completion:(id /* block */)arg2;
- (void)getTailspinSessionIDFor:(long long)arg1 reply:(id /* block */)arg2;
- (void)requestMessageFor:(long long)arg1 category:(unsigned int)arg2 type:(unsigned short)arg3 reply:(id /* block */)arg4;
- (void)sendWithMessage:(id)arg1 with:(unsigned int)arg2 and:(unsigned short)arg3 for:(long long)arg4;
- (void)setWithConfiguration:(id)arg1 for:(long long)arg2;
- (void)setWithServiceType:(unsigned short)arg1 for:(long long)arg2;
- (void)startSessionFor:(long long)arg1;
- (void)stopSessionFor:(long long)arg1;
- (void)validateFor:(long long)arg1 completion:(id /* block */)arg2;

@end
