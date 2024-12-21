/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppIntents.framework/AppIntents
 */

@interface LNXPCListenerEndpointContainer : NSObject {
    void auditTokenData;
    void listenerEndpoint;
    void resolvedAction;
}

@property (nonatomic, copy) NSData *auditTokenData;
@property (nonatomic, retain) NSXPCListenerEndpoint *listenerEndpoint;
@property (nonatomic, retain) LNAction *resolvedAction;

- (void).cxx_destruct;
- (id)auditTokenData;
- (id)init;
- (id)listenerEndpoint;
- (id)resolvedAction;
- (void)setAuditTokenData:(id)arg1;
- (void)setListenerEndpoint:(id)arg1;
- (void)setResolvedAction:(id)arg1;

@end