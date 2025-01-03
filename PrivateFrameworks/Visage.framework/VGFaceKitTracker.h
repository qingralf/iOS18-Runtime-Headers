/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Visage.framework/Visage
 */

@interface VGFaceKitTracker : NSObject {
    struct CVAFaceTracking { } * _faceKit;
    struct VGFaceKitTrackerOptions { 
        bool useInternalFaceDetector; 
        bool forceCPU; 
    }  _options;
    struct __CFDictionary { } * _quadSemantics;
    struct __CFDictionary { } * _semantics;
}

- (id).cxx_construct;
- (id)buildInputDictionaryWithCaptureData:(id)arg1 callback:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithOptions:(const struct VGFaceKitTrackerOptions { bool x1; bool x2; }*)arg1;
- (bool)loadFaceKitSemantics;
- (bool)loadQuadFaceKitSemantics;
- (bool)processWithCaptureData:(id)arg1 callback:(id /* block */)arg2;
- (struct __CFDictionary { }*)quadSemantics;
- (struct __CFDictionary { }*)semantics;

@end
