/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneSettingsCore : FBSCoreSettingsExtension <FBSSceneSettings>

@property (nonatomic) BOOL activityMode; /* unknown property attribute: ? */
@property (getter=isClientFuture, nonatomic) bool clientFuture;
@property (nonatomic, retain) <FBSceneClientProcess> *clientProcess; /* unknown property attribute: ? */
@property (nonatomic, copy) FBSDisplayConfiguration *displayConfiguration;
@property (getter=isForeground, nonatomic) bool foreground;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long interruptionPolicy;
@property (nonatomic) BOOL jetsamMode; /* unknown property attribute: ? */
@property (nonatomic) double level;
@property (getter=isOccluded, nonatomic) bool occluded;
@property (nonatomic) bool prefersProcessTaskSuspensionWhileSceneForeground; /* unknown property attribute: ? */
@property (nonatomic, retain) BSKeyedSettings *propagatedSettings; /* unknown property attribute: ? */

+ (id)descriptionOfValue:(id)arg1 forSetting:(id)arg2;
+ (id)protocol;

- (BOOL)activityMode;
- (id)clientProcess;
- (id)displayConfiguration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (void)frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)interfaceOrientation;
- (long long)interruptionPolicy;
- (bool)isClientFuture;
- (bool)isForeground;
- (bool)isOccluded;
- (BOOL)jetsamMode;
- (double)level;
- (bool)prefersProcessTaskSuspensionWhileSceneForeground;
- (id)propagatedSettings;
- (void)setActivityMode:(BOOL)arg1;
- (void)setClientFuture:(bool)arg1;
- (void)setClientProcess:(id)arg1;
- (void)setDisplayConfiguration:(id)arg1;
- (void)setForeground:(bool)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setInterruptionPolicy:(long long)arg1;
- (void)setJetsamMode:(BOOL)arg1;
- (void)setLevel:(double)arg1;
- (void)setOccluded:(bool)arg1;
- (void)setPrefersProcessTaskSuspensionWhileSceneForeground:(bool)arg1;
- (void)setPropagatedSettings:(id)arg1;

@end