/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface TVRemoteUI.FMPFView : UIView {
    void backdropAlphaSpring;
    void backdropRGBAColorSprings;
    void backdropRGBAColorSpringsIntensity;
    void backdropSigmaSpring;
    void config;
    void ecoModeObservation;
    void experienceType;
    void fmpfdelegate;
    void isConvergingBackdropShown;
    void lastAskedRadiusFactor;
    void lastAskedSprungRadiusFactor;
    void lastThermalState;
    void locationManager;
    void ringView;
    void sceneIsRunning;
    void scnSceneView;
    void skScene;
    void skSceneView;
    void style;
    void useGreenBackdropBlurAndOpacity;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)thermalStateDidChangeWithNotification:(id)arg1;

@end
