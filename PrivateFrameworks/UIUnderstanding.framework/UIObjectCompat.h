/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIUnderstanding.framework/UIUnderstanding
 */

@interface UIObjectCompat : NSObject {
    void boundingBox;
    void children;
    void clickDetection;
    void detection;
    void focusDetection;
    void iconDetection;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  id;
    void normalizedSquaredRect;
}

@property (nonatomic, retain) _TtC15UIUnderstanding11BoundingBox *boundingBox;
@property (nonatomic, copy) NSArray *children;
@property (nonatomic, retain) _TtC15UIUnderstanding21ClickabilityDetection *clickDetection;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) _TtC15UIUnderstanding11UIDetection *detection;
@property (nonatomic, retain) _TtC15UIUnderstanding14FocusDetection *focusDetection;
@property (nonatomic, retain) _TtC15UIUnderstanding13IconDetection *iconDetection;
@property (nonatomic, copy) NSUUID *id;

- (void).cxx_destruct;
- (id)boundingBox;
- (id)children;
- (id)clickDetection;
- (id)description;
- (id)detection;
- (id)focusDetection;
- (id)iconDetection;
- (id)id;
- (id)init;
- (id)initWithDetection:(id)arg1 clickable:(id)arg2 focused:(id)arg3 icon:(id)arg4 boundingBox:(id)arg5 children:(id)arg6;
- (id)initWithLabel:(long long)arg1 confidence:(double)arg2 text:(id)arg3 boundingBox:(id)arg4 children:(id)arg5 clickable:(bool)arg6 focused:(bool)arg7;
- (void)setBoundingBox:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)setClickDetection:(id)arg1;
- (void)setDetection:(id)arg1;
- (void)setFocusDetection:(id)arg1;
- (void)setIconDetection:(id)arg1;
- (void)setId:(id)arg1;

@end