/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SensorKit.framework/SensorKit
 */

@interface SRSensorDescriptionEnumerator : NSEnumerator {
    unsigned long long  _currentSensorDirectoryIndex;
    NSDirectoryEnumerator * _descriptionFileEnumerator;
    SRSensorsCache * _sensorsCache;
}

- (void)dealloc;
- (id)nextObject;

@end