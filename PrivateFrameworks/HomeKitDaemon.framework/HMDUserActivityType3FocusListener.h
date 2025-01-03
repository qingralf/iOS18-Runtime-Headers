/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUserActivityType3FocusListener : HMFObject <HMDUserActivityType3BiomeStreamSubscriberDelegate> {
    HMDUserActivityType3BiomeStreamSubscriber * _biomeSubscriber;
    <HMDHomeActivityStateManagerDataSource> * _dataSource;
    <HMDUserActivityType3FocusListenerDelegate> * _delegate;
}

@property (nonatomic, readonly) HMDUserActivityType3BiomeStreamSubscriber *biomeSubscriber;
@property (getter=isConfigured, nonatomic, readonly) bool configured;
@property (nonatomic, readonly) <HMDHomeActivityStateManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <HMDUserActivityType3FocusListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) HMDUserType3Focus *focus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)biomeEventDidUpdate;
- (id)biomeSubscriber;
- (void)configureWithCompletion:(id /* block */)arg1;
- (id)dataSource;
- (id)delegate;
- (id)focus;
- (id)initWithIdentifier:(id)arg1 dataSource:(id)arg2;
- (bool)isConfigured;
- (void)setDelegate:(id)arg1;
- (void)unconfigure;

@end
