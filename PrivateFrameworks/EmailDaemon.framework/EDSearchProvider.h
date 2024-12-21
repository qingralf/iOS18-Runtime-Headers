/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDSearchProvider : NSObject <EDSearchProvider> {
    <EDLocalSearchProvider> * _localSearchProvider;
    <EDRemoteSearchProvider> * _remoteSearchProvider;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <EDLocalSearchProvider> *localSearchProvider;
@property (readonly) <EDRemoteSearchProvider> *remoteSearchProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithLocalSearchProvider:(id)arg1 remoteSearchProvider:(id)arg2;
- (id)localSearchProvider;
- (id)remoteSearchProvider;

@end