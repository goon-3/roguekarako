//See the LICENSE file for details
#include "widgettree.h"

WidgetTree::WidgetTree(int x, int y)
{
	xroot = x;
	yroot = y;
	nchildren = 0;
}

WidgetTree::~WidgetTree()
{

}

void WidgetTree::addTreeNode(WidgetTreeNode& wtn)
{
	if (nchildren == 0) {
		children.push_back(wtn);
		nchildren ++;
	}

	for (std::vector<WidgetTreeNode>::iterator vi = children.begin();
		vi != children.end();
		vi++) {
		(*vi).addTreeNodeRec(*vi, wtn);
	}	
}

