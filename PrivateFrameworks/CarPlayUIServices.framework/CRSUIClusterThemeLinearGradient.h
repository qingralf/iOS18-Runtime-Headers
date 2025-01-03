/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
 */

@interface CRSUIClusterThemeLinearGradient : NSObject <BSXPCSecureCoding> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _endPoint;
    NSArray * _locations;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
    NSArray * _themeColors;
}

@property (nonatomic, readonly, copy) NSArray *colors;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } endPoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *locations;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } startPoint;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)colors;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (struct CGPoint { double x1; double x2; })endPoint;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithLocations:(id)arg1 colors:(id)arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 endPoint:(struct CGPoint { double x1; double x2; })arg4;
- (id)locations;
- (struct CGPoint { double x1; double x2; })startPoint;

@end
