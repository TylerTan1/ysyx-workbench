#include <monitor.h>

/* initialize the context */

int main(int argc, char *argv[]) {
	/* declare the simulation environment */
	SimulationContext ctx;
	/* initialize the monitor */
	monitor::initialize(argc, argv, ctx);
	/* execute */
	monitor::mainloop(ctx);

	/* close */
	ctx.trace->close();
	return 0;
}
