#pragma once

/*=========================================================================
  Program:   OsiriX

  Copyright (c) OsiriX Team
  All rights reserved.
  Distributed under GNU - GPL
  
  See http://www.osirix-viewer.com/copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.
=========================================================================*/

#import <Cocoa/Cocoa.h>
@class GRLineDataSet, GRChartView, RoiEnhancementChart;

@interface RoiEnhancementAreaDataSet : NSObject {
	GRLineDataSet* _min;
	GRLineDataSet* _max;
	RoiEnhancementChart* _chart;
	BOOL _displayed;
}

@property(readonly) GRLineDataSet* min;
@property(readonly) GRLineDataSet* max;
@property(nonatomic) BOOL displayed;

-(id)initWithOwnerChart:(RoiEnhancementChart*)chart min:(GRLineDataSet*)min max:(GRLineDataSet*)max;
-(void)drawRect:(NSRect)dirtyRect;

@end
